cmd_drivers/pci/modules.order := {   cat drivers/pci/controller/modules.order;   cat drivers/pci/switch/modules.order; :; } | awk '!x[$$0]++' - > drivers/pci/modules.order
