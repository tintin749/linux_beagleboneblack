cmd_drivers/remoteproc/modules.order := {   echo drivers/remoteproc/omap_remoteproc.ko;   echo drivers/remoteproc/pru_rproc.ko; :; } | awk '!x[$$0]++' - > drivers/remoteproc/modules.order
