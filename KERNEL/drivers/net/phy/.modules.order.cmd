cmd_drivers/net/phy/modules.order := {   echo drivers/net/phy/dp83869.ko;   cat drivers/net/phy/mscc/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/phy/modules.order
