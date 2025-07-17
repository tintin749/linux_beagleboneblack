cmd_drivers/media/usb/airspy/modules.order := {   echo drivers/media/usb/airspy/airspy.ko; :; } | awk '!x[$$0]++' - > drivers/media/usb/airspy/modules.order
