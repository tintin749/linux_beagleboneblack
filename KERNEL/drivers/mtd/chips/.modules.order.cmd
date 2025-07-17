cmd_drivers/mtd/chips/modules.order := {   echo drivers/mtd/chips/map_ram.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/chips/modules.order
