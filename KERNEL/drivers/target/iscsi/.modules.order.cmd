cmd_drivers/target/iscsi/modules.order := {   echo drivers/target/iscsi/iscsi_target_mod.ko; :; } | awk '!x[$$0]++' - > drivers/target/iscsi/modules.order
