cmd_arch/arm/probes/modules.order := {   cat arch/arm/probes/uprobes/modules.order;   cat arch/arm/probes/kprobes/modules.order; :; } | awk '!x[$$0]++' - > arch/arm/probes/modules.order
