cmd_drivers/rpmsg/modules.order := {   echo drivers/rpmsg/rpmsg_core.ko;   echo drivers/rpmsg/virtio_rpmsg_bus.ko; :; } | awk '!x[$$0]++' - > drivers/rpmsg/modules.order
