cmd_drivers/i2c/muxes/modules.order := {   echo drivers/i2c/muxes/i2c-arb-gpio-challenge.ko;   echo drivers/i2c/muxes/i2c-mux-pca954x.ko; :; } | awk '!x[$$0]++' - > drivers/i2c/muxes/modules.order
