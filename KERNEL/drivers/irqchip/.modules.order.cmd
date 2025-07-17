cmd_drivers/irqchip/modules.order := {   echo drivers/irqchip/irq-pruss-intc.ko; :; } | awk '!x[$$0]++' - > drivers/irqchip/modules.order
