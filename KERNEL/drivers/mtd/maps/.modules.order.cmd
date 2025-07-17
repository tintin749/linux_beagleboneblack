cmd_drivers/mtd/maps/modules.order := {   echo drivers/mtd/maps/physmap.ko;   echo drivers/mtd/maps/plat-ram.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/maps/modules.order
