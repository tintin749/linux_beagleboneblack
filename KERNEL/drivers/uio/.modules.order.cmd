cmd_drivers/uio/modules.order := {   echo drivers/uio/uio.ko;   echo drivers/uio/uio_pdrv_genirq.ko;   echo drivers/uio/uio_pruss.ko; :; } | awk '!x[$$0]++' - > drivers/uio/modules.order
