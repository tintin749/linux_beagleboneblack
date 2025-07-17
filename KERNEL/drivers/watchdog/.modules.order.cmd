cmd_drivers/watchdog/modules.order := {   echo drivers/watchdog/pretimeout_panic.ko; :; } | awk '!x[$$0]++' - > drivers/watchdog/modules.order
