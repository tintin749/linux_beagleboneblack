cmd_drivers/media/mmc/siano/modules.order := {   echo drivers/media/mmc/siano/smssdio.ko; :; } | awk '!x[$$0]++' - > drivers/media/mmc/siano/modules.order
