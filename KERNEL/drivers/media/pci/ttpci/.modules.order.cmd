cmd_drivers/media/pci/ttpci/modules.order := {   echo drivers/media/pci/ttpci/ttpci-eeprom.ko; :; } | awk '!x[$$0]++' - > drivers/media/pci/ttpci/modules.order
