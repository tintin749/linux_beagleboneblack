cmd_net/core/modules.order := {   echo net/core/pktgen.ko;   echo net/core/drop_monitor.ko; :; } | awk '!x[$$0]++' - > net/core/modules.order
