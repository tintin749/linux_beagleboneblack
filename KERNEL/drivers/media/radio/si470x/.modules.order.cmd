cmd_drivers/media/radio/si470x/modules.order := {   echo drivers/media/radio/si470x/radio-si470x-usb.ko; :; } | awk '!x[$$0]++' - > drivers/media/radio/si470x/modules.order
