cmd_arch/arm/probes/kprobes/modules.order := {  :; } | awk '!x[$$0]++' - > arch/arm/probes/kprobes/modules.order
