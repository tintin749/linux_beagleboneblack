cmd_drivers/iio/resolver/modules.order := {   echo drivers/iio/resolver/ad2s90.ko;   echo drivers/iio/resolver/ad2s1200.ko; :; } | awk '!x[$$0]++' - > drivers/iio/resolver/modules.order
