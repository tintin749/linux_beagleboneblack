cmd_drivers/mtd/devices/modules.order := {   echo drivers/mtd/devices/mtd_dataflash.ko;   echo drivers/mtd/devices/sst25l.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/devices/modules.order
