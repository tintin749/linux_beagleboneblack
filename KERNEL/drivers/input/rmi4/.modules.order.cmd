cmd_drivers/input/rmi4/modules.order := {   echo drivers/input/rmi4/rmi_core.ko; :; } | awk '!x[$$0]++' - > drivers/input/rmi4/modules.order
