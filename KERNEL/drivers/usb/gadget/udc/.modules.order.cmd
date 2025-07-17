cmd_drivers/usb/gadget/udc/modules.order := {   echo drivers/usb/gadget/udc/dummy_hcd.ko; :; } | awk '!x[$$0]++' - > drivers/usb/gadget/udc/modules.order
