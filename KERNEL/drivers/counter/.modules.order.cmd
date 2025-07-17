cmd_drivers/counter/modules.order := {   echo drivers/counter/counter.ko;   echo drivers/counter/ti-eqep.ko; :; } | awk '!x[$$0]++' - > drivers/counter/modules.order
