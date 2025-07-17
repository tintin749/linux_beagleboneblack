cmd_fs/fuse/modules.order := {   echo fs/fuse/cuse.ko;   echo fs/fuse/virtiofs.ko; :; } | awk '!x[$$0]++' - > fs/fuse/modules.order
