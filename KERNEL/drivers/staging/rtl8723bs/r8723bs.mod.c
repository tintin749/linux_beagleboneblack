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
	{ 0xa84b5654, "register_netdevice" },
	{ 0x9313749f, "sdio_writeb" },
	{ 0x76dfdc17, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc207ee07, "complete_and_exit" },
	{ 0x7dfa5331, "wiphy_free" },
	{ 0xaf20bbef, "cfg80211_unlink_bss" },
	{ 0x87b89061, "cfg80211_connect_done" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x1879fcbd, "bridge_tunnel_header" },
	{ 0x97255bdf, "strlen" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x51d260e3, "find_vpid" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa60266c3, "skb_copy" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2bdb82b3, "cfg80211_mgmt_tx_status" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x2799bd25, "sdio_writel" },
	{ 0x69b18f43, "rfc1042_header" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x669f8c58, "netif_tx_stop_all_queues" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xb50c43b2, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xeb337465, "wiphy_unregister" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x328a05f1, "strncpy" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x875564aa, "sdio_readl" },
	{ 0x173370fe, "cfg80211_del_sta_sinfo" },
	{ 0x613a13a0, "cfg80211_rx_mgmt_khz" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x44ead7df, "cfg80211_michael_mic_failure" },
	{ 0x7b845602, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x39bceab8, "kill_pid" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xf20de49f, "cfg80211_ibss_joined" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x41dd3834, "flush_signals" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0xb8d41201, "ieee80211_get_channel_khz" },
	{ 0xc6899b6a, "netif_device_attach" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa3d937a4, "cfg80211_roamed" },
	{ 0x876ebb7e, "cfg80211_put_bss" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x5fce42a0, "wiphy_register" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbb2edfb3, "wiphy_new_nm" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0xa40a09e5, "sdio_f0_readb" },
	{ 0x3066972, "wake_up_process" },
	{ 0x9b126258, "of_get_property" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xaa019770, "cfg80211_disconnected" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xa433f762, "cfg80211_new_sta" },
	{ 0x459253a9, "sdio_memcpy_toio" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xe3264f62, "dev_alloc_name" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0xe2393dc3, "sdio_memcpy_fromio" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x541e8215, "cfg80211_scan_done" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0xbc2a1622, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("sdio:c*v024Cd0523*");
MODULE_ALIAS("sdio:c*v024Cd0525*");
MODULE_ALIAS("sdio:c*v024Cd0623*");
MODULE_ALIAS("sdio:c*v024Cd0626*");
MODULE_ALIAS("sdio:c*v024Cd0627*");
MODULE_ALIAS("sdio:c*v024CdB723*");

MODULE_INFO(srcversion, "77208E593DD959C29D255F1");
