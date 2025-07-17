cmd_drivers/net/wireless/microchip/modules.order := {   cat drivers/net/wireless/microchip/wilc1000/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/wireless/microchip/modules.order
