cmd_drivers/mmc/core/modules.order := {   echo drivers/mmc/core/pwrseq_sd8787.ko;   echo drivers/mmc/core/sdio_uart.ko; :; } | awk '!x[$$0]++' - > drivers/mmc/core/modules.order
