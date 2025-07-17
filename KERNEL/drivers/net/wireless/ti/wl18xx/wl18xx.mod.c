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
	{ 0x5c7c4f71, "wl12xx_cmd_build_probe_req" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x403afc8a, "wlcore_set_key" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x52486d44, "wlcore_event_beacon_loss" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x82bab949, "wlcore_event_dummy_packet" },
	{ 0x179f4abd, "wlcore_event_inactive_sta" },
	{ 0x7d4c7c40, "wlcore_event_ba_rx_constraint" },
	{ 0x35c01e5f, "ieee80211_radar_detected" },
	{ 0x23d92ab7, "wlcore_event_fw_logger" },
	{ 0xc1b99792, "ieee80211_channel_to_freq_khz" },
	{ 0x6ed67233, "wlcore_event_rssi_trigger" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x61b628e4, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xd88603ff, "wlcore_probe" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x124bff03, "wlcore_alloc_hw" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe19c4148, "wl1271_cmd_configure" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x6a6d6acc, "default_llseek" },
	{ 0xa58c0a5, "wlcore_event_sched_scan_completed" },
	{ 0xb9691da8, "wlcore_boot_upload_firmware" },
	{ 0xc5850110, "printk" },
	{ 0x72f225cf, "wlcore_set_partition" },
	{ 0x328a05f1, "strncpy" },
	{ 0x925a1731, "wlcore_enable_interrupts" },
	{ 0xf687108, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x448b4776, "simple_open" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x47d31810, "__cfg80211_send_event_skb" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x88db665b, "kstrtoul_from_user" },
	{ 0x5cf2debc, "wlcore_event_channel_switch" },
	{ 0xae501b95, "__cfg80211_alloc_event_skb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x692f6ce0, "wlcore_disable_interrupts" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xaa3d9f69, "wlcore_remove" },
	{ 0xa35f6fc8, "ieee80211_find_sta" },
	{ 0x34ca145c, "kstrtou8_from_user" },
	{ 0x71b7bcb8, "wlcore_event_max_tx_failure" },
	{ 0x94689c01, "wl1271_free_tx_id" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x851d3edd, "ieee80211_stop_rx_ba_session" },
	{ 0xedc3f134, "wlcore_scan_sched_scan_results" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0x530f5812, "wlcore_free_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1db71fa, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0xc766b3c8, "wl1271_debugfs_update_stats" },
	{ 0x8331880d, "wlcore_set_scan_chan_params" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xa6c97588, "wlcore_boot_run_firmware" },
	{ 0xbcc1e97f, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5dfa841, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x238a76e8, "wlcore_event_roc_complete" },
	{ 0x99bb8806, "memmove" },
	{ 0x6507aaf5, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x866f97c5, "wl1271_cmd_send" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x3fb42164, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore,mac80211,cfg80211");

MODULE_ALIAS("platform:wl18xx");
