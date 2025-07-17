cmd_crypto/async_tx/modules.order := {   echo crypto/async_tx/async_tx.ko;   echo crypto/async_tx/async_xor.ko; :; } | awk '!x[$$0]++' - > crypto/async_tx/modules.order
