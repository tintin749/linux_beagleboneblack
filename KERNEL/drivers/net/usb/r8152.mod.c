#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xeea0399, "strscpy" },
	{ 0x24d09026, "usb_enable_lpm" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x71c90087, "memcmp" },
	{ 0x47a49066, "crypto_shash_digest" },
	{ 0xd9d2e420, "crypto_alloc_shash" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x632780, "work_busy" },
	{ 0xa69c8599, "usb_driver_set_configuration" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x9857200c, "device_set_wakeup_enable" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf9d1bc72, "dev_set_mac_address" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x24488c8f, "skb_checksum_help" },
	{ 0xdfb957d8, "__skb_gso_segment" },
	{ 0x44da5d0f, "__csum_ipv6_magic" },
	{ 0xad3d78fd, "usb_autopm_get_interface_async" },
	{ 0x945c707, "netif_schedule_queue" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x738c0b10, "skb_put" },
	{ 0x9958194a, "__napi_alloc_skb" },
	{ 0xabc1c505, "napi_gro_receive" },
	{ 0xff966963, "netdev_notice" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x34b1f8f2, "netif_device_detach" },
	{ 0x8a8bccad, "__napi_schedule" },
	{ 0x6acbbe17, "napi_schedule_prep" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xfae79cd1, "eth_platform_get_mac_address" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x70351a34, "napi_disable" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xaac2a3d8, "usb_autopm_put_interface_async" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x43145f74, "page_address" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xca3a2170, "skb_tstamp_tx" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x208ac5ce, "skb_clone_tx_timestamp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4fad61, "consume_skb" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x3310cb2c, "usb_queue_reset_device" },
	{ 0xdc4e4727, "mii_nway_restart" },
	{ 0x8d7952c2, "mii_ethtool_get_link_ksettings" },
	{ 0x91452968, "_dev_err" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8050d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07ABd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep07C6d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v045Ep0927d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Fd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3054d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3062d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3069d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp3082d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7205d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp720Cd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp7214d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFp721Ed*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v17EFpA387d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v13B1p0041d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0955p09FFd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2357p0601d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "1BF0D10B59300FBEB66F980");
