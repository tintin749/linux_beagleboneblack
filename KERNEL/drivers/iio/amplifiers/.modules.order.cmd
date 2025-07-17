cmd_drivers/iio/amplifiers/modules.order := {   echo drivers/iio/amplifiers/ad8366.ko;   echo drivers/iio/amplifiers/hmc425a.ko; :; } | awk '!x[$$0]++' - > drivers/iio/amplifiers/modules.order
