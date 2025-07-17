cmd_drivers/crypto/virtio/modules.order := {   echo drivers/crypto/virtio/virtio_crypto.ko; :; } | awk '!x[$$0]++' - > drivers/crypto/virtio/modules.order
