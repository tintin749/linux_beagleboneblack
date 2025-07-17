cmd_drivers/staging/iio/impedance-analyzer/modules.order := {   echo drivers/staging/iio/impedance-analyzer/ad5933.ko; :; } | awk '!x[$$0]++' - > drivers/staging/iio/impedance-analyzer/modules.order
