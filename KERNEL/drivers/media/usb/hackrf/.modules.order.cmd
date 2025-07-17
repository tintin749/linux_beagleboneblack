cmd_drivers/media/usb/hackrf/modules.order := {   echo drivers/media/usb/hackrf/hackrf.ko; :; } | awk '!x[$$0]++' - > drivers/media/usb/hackrf/modules.order
