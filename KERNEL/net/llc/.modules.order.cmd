cmd_net/llc/modules.order := {   echo net/llc/llc.ko;   echo net/llc/llc2.ko; :; } | awk '!x[$$0]++' - > net/llc/modules.order
