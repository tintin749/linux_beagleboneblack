cmd_drivers/atm/modules.order := {   echo drivers/atm/adummy.ko; :; } | awk '!x[$$0]++' - > drivers/atm/modules.order
