cmd_drivers/staging/iio/cdc/modules.order := {   echo drivers/staging/iio/cdc/ad7150.ko;   echo drivers/staging/iio/cdc/ad7746.ko; :; } | awk '!x[$$0]++' - > drivers/staging/iio/cdc/modules.order
