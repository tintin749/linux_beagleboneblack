cmd_drivers/rpmsg-kdrv/modules.order := {   echo drivers/rpmsg-kdrv/rpmsg_kdrv.ko;   echo drivers/rpmsg-kdrv/rpmsg_kdrv_switch.ko; :; } | awk '!x[$$0]++' - > drivers/rpmsg-kdrv/modules.order
