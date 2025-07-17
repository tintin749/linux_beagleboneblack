cmd_drivers/iio/afe/modules.order := {   echo drivers/iio/afe/iio-rescale.ko; :; } | awk '!x[$$0]++' - > drivers/iio/afe/modules.order
