cmd_drivers/soc/qcom/modules.order := {   echo drivers/soc/qcom/qmi_helpers.ko; :; } | awk '!x[$$0]++' - > drivers/soc/qcom/modules.order
