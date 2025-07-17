cmd_drivers/staging/iio/adc/modules.order := {   echo drivers/staging/iio/adc/ad7816.ko;   echo drivers/staging/iio/adc/ad7280a.ko; :; } | awk '!x[$$0]++' - > drivers/staging/iio/adc/modules.order
