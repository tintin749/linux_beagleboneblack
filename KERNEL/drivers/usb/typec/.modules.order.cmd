cmd_drivers/usb/typec/modules.order := {   cat drivers/usb/typec/altmodes/modules.order;   cat drivers/usb/typec/mux/modules.order; :; } | awk '!x[$$0]++' - > drivers/usb/typec/modules.order
