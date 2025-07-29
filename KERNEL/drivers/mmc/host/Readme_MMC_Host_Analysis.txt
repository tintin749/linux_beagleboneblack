Files from Host that come into action :



tintin749: mmc subsystem code flow

GitHub Copilot: The MMC (MultiMediaCard) subsystem in Linux handles communication between the kernel and MMC/SD cards. Here’s a high-level code flow overview:

1. **Initialization**  
   - The MMC core (`drivers/mmc/core/`) initializes during boot.
   - Host controller drivers (e.g., `drivers/mmc/host/`) register with the core.

2. **Card Detection**  
   - Host controller detects card insertion/removal.
   - Notifies MMC core via callbacks.

3. **Card Identification & Initialization**  
   - MMC core sends commands (CMD0, CMD8, etc.) to identify and initialize the card.
   - Card responds with its capabilities.

4. **Block Device Registration**  
   - Once initialized, the card is registered as a block device (`/dev/mmcblkX`).

5. **Data Transfer**  
   - Read/write requests from user space go through the block layer.
   - MMC core translates these into MMC commands (CMD17, CMD24, etc.).
   - Host controller driver handles actual data transfer (DMA/PIO).

6. **Error Handling & Recovery**  
   - Errors are reported back to the MMC core.
   - Core may retry or reset the card/host as needed.

**Key Files:**
- `drivers/mmc/core/core.c`: MMC core logic
- `drivers/mmc/core/block.c`: Block device interface
- `drivers/mmc/host/`: Host controller drivers (e.g., `mmc_spi.c`, `sdhci.c`)

**Typical Call Flow:**
- User space → Block layer → MMC block driver → MMC core → Host controller → Card

Let me know if you want a more detailed flow or code references for a specific part!

tintin749: git command to see status for files with specific types

GitHub Copilot: You can use the `git status` command with `--` and a glob pattern to see the status of files with specific types (extensions). For example, to see the status of all `.c` and `.h` files:

```bash
git status -- '*.c' '*.h'
```

You can add more patterns as needed.  
The quotes are important to prevent the shell from expanding the globs.

tintin749: Host folder in MMC subsystem in linux

GitHub Copilot: The **host** folder in the MMC subsystem (`drivers/mmc/host/`) contains **host controller drivers**. These drivers are responsible for interfacing between the Linux MMC core and the hardware controller on your board (e.g., SDHCI, OMAP, etc.).

**Key Points:**
- Each file in host typically supports a specific hardware controller or SoC family.
- The host driver implements functions to send commands, transfer data, handle interrupts, and manage power for the MMC/SD card interface.
- The MMC core (`drivers/mmc/core/`) is hardware-agnostic and relies on these host drivers for actual hardware operations.

**Examples of files you might see:**
- `sdhci.c` – SD Host Controller Interface (standard for many platforms)
- `omap_hsmmc.c` – OMAP High-Speed MMC controller (used on BeagleBone Black)
- `mmci.c` – ARM PrimeCell PL180/181 MMC controller

**Typical Flow:**
1. Host driver registers with MMC core.
2. When a card is detected, the host driver handles low-level communication.
3. Data transfers and command handling are performed by the host driver, as directed by the MMC core.

Let me know if you want details on a specific host driver or code flow!

files compiled :

-rw-rw-r-- 1 chandan chandan 21816 Jul 18 00:31 mmc_spi.o
-rw-rw-r-- 1 chandan chandan  3136 Jul 18 00:31 of_mmc_spi.o
-rw-rw-r-- 1 chandan chandan 79980 Jul 18 00:31 sdhci.o
-rw-rw-r-- 1 chandan chandan 19804 Jul 18 00:31 sdhci-omap.o
-rw-rw-r-- 1 chandan chandan 12216 Jul 18 00:31 sdhci-pltfm.o
-rw-rw-r-- 1 chandan chandan  7568 Jul 18 00:31 ushc.o
-rw-rw-r-- 1 chandan chandan 36908 Jul 18 00:31 vub300.o

/**********************************************************************************************/
For the **BeagleBone Black** using **eMMC** in the Linux device driver stack, the main files in the `drivers/mmc/host/` folder are:

````plaintext
sdhci.c          // Core SD Host Controller Interface logic
sdhci-omap.c     // OMAP-specific SDHCI glue layer (used for TI SoCs like BeagleBone Black)
sdhci-pltfm.c    // Platform support for SDHCI controllers
````

**Explanation:**
- **`sdhci.c`**: Implements the standard SD Host Controller Interface (SDHCI) protocol.
- **`sdhci-omap.c`**: Provides OMAP (TI) platform-specific support, connecting the generic SDHCI core to the OMAP hardware found on BeagleBone Black.
- **`sdhci-pltfm.c`**: Handles platform device registration and abstraction for SDHCI controllers.

These files work together to enable eMMC and SD card support on the BeagleBone Black.  
You may also see `omap_hsmmc.c` on older kernels, but for mainline and recent kernels, the SDHCI-based drivers above are standard for eMMC on BeagleBone Black.


...existing content...

---

## SDHCI Driver (`sdhci.c`) Call Flow

1. **Initialization**
   - Platform driver probe calls `sdhci_add_host()`.
   - Registers the host with the MMC core.

2. **Request Handling**
   - MMC core calls `sdhci_request()` when a command/data transfer is needed.
   - `sdhci_request()` prepares the command and data, sets up DMA/PIO, and writes to controller registers.

3. **Command/Data Execution**
   - SDHCI hardware starts the transfer.
   - On completion or error, an interrupt is generated.

4. **Interrupt Handling**
   - Interrupt handler (e.g., `sdhci_irq()`) is called.
   - Checks interrupt status, processes command/data completion, handles errors, and notifies MMC core.

5. **Completion**
   - MMC core is notified of request completion.
   - If more requests are pending, the process repeats.

**Simplified Sequence:**
```
mmc_request
   |
   +-- sdhci_request()
         |
         +-- Setup command/data
         +-- Start transfer (DMA/PIO)
         +-- Wait for IRQ
                |
                +-- sdhci_irq()
                        |
                        +-- Complete request, notify MMC core
```

**Key Functions:**
- `sdhci_add_host()` – Host/controller initialization
- `sdhci_request()` – Handles MMC requests
- `sdhci_irq()` – Interrupt handler for command/data completion
- `sdhci_set_clock()`, `sdhci_set_power()` – Bus configuration

---

...existing content...

Device Tree / Platform Bus
        |
        v
sdhci_omap_driver (sdhci-omap.c)
        |
        +-- sdhci_omap_probe()
                |
                +-- sdhci_pltfm_init()         (sdhci-pltfm.c)
                |      |
                |      +-- sdhci_alloc_host()  (sdhci.c)
                |
                +-- sdhci_add_host()           (sdhci.c)
                       |
                       +-- sdhci_setup_host()  (sdhci.c)
                       +-- mmc_add_host()      (core)
        |
        +-- sdhci_omap_remove()
        +-- sdhci_omap_suspend()/resume()

------------------------------------------------------------

MMC Core (mmc_request)
        |
        v
sdhci_request()                (sdhci.c)
        |
        +-- Setup command/data
        +-- Start transfer (DMA/PIO)
        +-- Wait for IRQ
                |
                v
        sdhci_irq()            (sdhci.c)
                |
                +-- Handle command/data completion
                +-- Notify MMC core

------------------------------------------------------------

Other Key Interactions:
- sdhci_pltfm_init()/exit()   (sdhci-pltfm.c): Platform-specific setup/teardown
- sdhci_omap_ops              (sdhci-omap.c): OMAP-specific callbacks for SDHCI core
- sdhci_ops                   (sdhci.c): Generic SDHCI operations

------------------------------------------------------------

Summary:
- **sdhci-omap.c**: Platform driver, OMAP-specific glue, probe/remove/pm ops, quirks.
- **sdhci-pltfm.c**: Platform device abstraction, host allocation, platform init/exit.
- **sdhci.c**: Core SDHCI logic, request handling, IRQ, DMA/PIO, MMC core interface.