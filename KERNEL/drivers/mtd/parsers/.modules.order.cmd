cmd_drivers/mtd/parsers/modules.order := {   echo drivers/mtd/parsers/ar7part.ko;   echo drivers/mtd/parsers/ofpart.ko; :; } | awk '!x[$$0]++' - > drivers/mtd/parsers/modules.order
