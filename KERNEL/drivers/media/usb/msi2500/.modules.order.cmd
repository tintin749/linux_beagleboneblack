cmd_drivers/media/usb/msi2500/modules.order := {   echo drivers/media/usb/msi2500/msi2500.ko; :; } | awk '!x[$$0]++' - > drivers/media/usb/msi2500/modules.order
