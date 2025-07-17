cmd_arch/arm/probes/uprobes/modules.order := {  :; } | awk '!x[$$0]++' - > arch/arm/probes/uprobes/modules.order
