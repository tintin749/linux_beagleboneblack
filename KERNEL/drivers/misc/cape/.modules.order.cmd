cmd_drivers/misc/cape/modules.order := {   cat drivers/misc/cape/beaglebone/modules.order; :; } | awk '!x[$$0]++' - > drivers/misc/cape/modules.order
