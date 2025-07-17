cmd_drivers/mfd/modules.order := {   echo drivers/mfd/wl1273-core.ko; :; } | awk '!x[$$0]++' - > drivers/mfd/modules.order
