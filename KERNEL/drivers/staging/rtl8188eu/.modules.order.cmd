cmd_drivers/staging/rtl8188eu/modules.order := {   echo drivers/staging/rtl8188eu/r8188eu.ko; :; } | awk '!x[$$0]++' - > drivers/staging/rtl8188eu/modules.order
