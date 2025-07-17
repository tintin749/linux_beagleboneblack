cmd_net/dccp/modules.order := {   echo net/dccp/dccp.ko;   echo net/dccp/dccp_ipv4.ko;   echo net/dccp/dccp_ipv6.ko;   echo net/dccp/dccp_diag.ko; :; } | awk '!x[$$0]++' - > net/dccp/modules.order
