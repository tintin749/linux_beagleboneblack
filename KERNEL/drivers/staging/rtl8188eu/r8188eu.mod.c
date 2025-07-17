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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc207ee07, "complete_and_exit" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x97255bdf, "strlen" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x3e3bad0a, "__tasklet_hi_schedule" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa60266c3, "skb_copy" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x669f8c58, "netif_tx_stop_all_queues" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xe0d9832d, "wireless_send_event" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x41dd3834, "flush_signals" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x6867f96, "lib80211_get_crypto_ops" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x3066972, "wake_up_process" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xe3264f62, "dev_alloc_name" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "cfg80211,lib80211");

MODULE_ALIAS("usb:v0BDAp8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p18F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p331Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C4Ep0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0076d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApFFEFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "33E331B2DEB16477EAAB1D6");
