cmd_net/phonet/modules.order := {   echo net/phonet/phonet.ko;   echo net/phonet/pn_pep.ko; :; } | awk '!x[$$0]++' - > net/phonet/modules.order
