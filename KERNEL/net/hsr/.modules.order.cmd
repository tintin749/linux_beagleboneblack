cmd_net/hsr/modules.order := {   echo net/hsr/hsr.ko; :; } | awk '!x[$$0]++' - > net/hsr/modules.order
