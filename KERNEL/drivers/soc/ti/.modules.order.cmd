cmd_drivers/soc/ti/modules.order := {   echo drivers/soc/ti/pm33xx.ko;   echo drivers/soc/ti/wkup_m3_ipc.ko;   echo drivers/soc/ti/pruss.ko; :; } | awk '!x[$$0]++' - > drivers/soc/ti/modules.order
