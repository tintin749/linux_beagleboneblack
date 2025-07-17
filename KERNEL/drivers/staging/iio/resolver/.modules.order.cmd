cmd_drivers/staging/iio/resolver/modules.order := {   echo drivers/staging/iio/resolver/ad2s1210.ko; :; } | awk '!x[$$0]++' - > drivers/staging/iio/resolver/modules.order
