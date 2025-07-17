cmd_drivers/net/can/c_can/modules.order := {   echo drivers/net/can/c_can/c_can.ko;   echo drivers/net/can/c_can/c_can_platform.ko; :; } | awk '!x[$$0]++' - > drivers/net/can/c_can/modules.order
