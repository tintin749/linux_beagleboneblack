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
	{ 0x8b4f2006, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x403afc8a, "wlcore_set_key" },
	{ 0xdc199908, "wl1271_acx_init_mem_config" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x52486d44, "wlcore_event_beacon_loss" },
	{ 0x82bab949, "wlcore_event_dummy_packet" },
	{ 0x179f4abd, "wlcore_event_inactive_sta" },
	{ 0x7d4c7c40, "wlcore_event_ba_rx_constraint" },
	{ 0xf1559c27, "wl1271_acx_pm_config" },
	{ 0x1b823ac8, "wlcore_calc_packet_alignment" },
	{ 0x6ed67233, "wlcore_event_rssi_trigger" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x61b628e4, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xd88603ff, "wlcore_probe" },
	{ 0x124bff03, "wlcore_alloc_hw" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x19e63747, "wl1271_acx_set_ht_capabilities" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe19c4148, "wl1271_cmd_configure" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0xf42819, "wl1271_cmd_data_path" },
	{ 0xde84146d, "wl12xx_acx_mem_cfg" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xa58c0a5, "wlcore_event_sched_scan_completed" },
	{ 0xb9691da8, "wlcore_boot_upload_firmware" },
	{ 0x1ba4393d, "wl1271_acx_sleep_auth" },
	{ 0xc5850110, "printk" },
	{ 0x72f225cf, "wlcore_set_partition" },
	{ 0x925a1731, "wlcore_enable_interrupts" },
	{ 0x68f49360, "wl1271_cmd_test" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x448b4776, "simple_open" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x5cf2debc, "wlcore_event_channel_switch" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x692f6ce0, "wlcore_disable_interrupts" },
	{ 0xaa3d9f69, "wlcore_remove" },
	{ 0x71b7bcb8, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xedc3f134, "wlcore_scan_sched_scan_results" },
	{ 0xf4fc33a4, "wlcore_event_soft_gemini_sense" },
	{ 0x530f5812, "wlcore_free_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc7c37403, "wlcore_tx_complete" },
	{ 0xc1db71fa, "wl1271_format_buffer" },
	{ 0x9d669763, "memcpy" },
	{ 0xc766b3c8, "wl1271_debugfs_update_stats" },
	{ 0x8331880d, "wlcore_set_scan_chan_params" },
	{ 0xa6c97588, "wlcore_boot_run_firmware" },
	{ 0xbcc1e97f, "wlcore_translate_addr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5dfa841, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x238a76e8, "wlcore_event_roc_complete" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x866f97c5, "wl1271_cmd_send" },
	{ 0xb080fabb, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore,mac80211");

MODULE_ALIAS("platform:wl12xx");
