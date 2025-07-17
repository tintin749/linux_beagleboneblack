cmd_arch/arm/oprofile/modules.order := {   echo arch/arm/oprofile/oprofile.ko; :; } | awk '!x[$$0]++' - > arch/arm/oprofile/modules.order
