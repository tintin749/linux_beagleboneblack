cmd_drivers/greybus/modules.order := {   echo drivers/greybus/greybus.ko;   echo drivers/greybus/gb-es2.ko; :; } | awk '!x[$$0]++' - > drivers/greybus/modules.order
