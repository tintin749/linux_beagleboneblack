cmd_drivers/md/bcache/modules.order := {   echo drivers/md/bcache/bcache.ko; :; } | awk '!x[$$0]++' - > drivers/md/bcache/modules.order
