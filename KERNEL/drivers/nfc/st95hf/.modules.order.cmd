cmd_drivers/nfc/st95hf/modules.order := {   echo drivers/nfc/st95hf/st95hf.ko; :; } | awk '!x[$$0]++' - > drivers/nfc/st95hf/modules.order
