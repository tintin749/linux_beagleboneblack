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
	{ 0xdf4afc49, "ieee80211_rx_napi" },
	{ 0x268543e4, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd5873508, "rtl_fw_cb" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe8415f98, "rtl_cam_get_free_entry" },
	{ 0x4d4d6f47, "rtl92c_phy_set_rfpath_switch" },
	{ 0x449f4605, "rtl_usb_disconnect" },
	{ 0x6ec18b73, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xa0c3d9d2, "rtl92c_phy_set_txpower_level" },
	{ 0x1c996aac, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0xd6f588ec, "rtl92c_dm_check_txpower_tracking" },
	{ 0x6b95f54d, "rtl_ps_disable_nic" },
	{ 0x70c67f42, "rtl92c_dm_watchdog" },
	{ 0xea780398, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x812554a, "_rtl92c_phy_rf_serial_write" },
	{ 0x4b8b3326, "rtl_get_tcb_desc" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xdd46c536, "_rtl92c_phy_rf_serial_read" },
	{ 0xbc7e4a63, "rtl92c_phy_set_bw_mode" },
	{ 0xef9a17f8, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0x30a956d7, "rtl_query_rxpwrpercentage" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa9731390, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x58691d0e, "rtl_phy_scan_operation_backup" },
	{ 0x47a2dedb, "rtl92c_dm_init_edca_turbo" },
	{ 0x4c082310, "rtl92c_phy_iq_calibrate" },
	{ 0x442b9fc5, "rtl92c_dm_init" },
	{ 0xa0e24c43, "rtl_usb_probe" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc4eb7117, "rtl92c_phy_set_bb_reg" },
	{ 0x5f754e5a, "memset" },
	{ 0x8b1c93c2, "rtl_ps_enable_nic" },
	{ 0x78267999, "rtl_get_hwinfo" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x15b0439e, "rtl92c_dm_rf_saving" },
	{ 0x33b95e40, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0x326743c3, "dm_writepowerindex" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xd29a866e, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x3d76b9bc, "rtl_signal_scale_mapping" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x147cbfb8, "_rtl92c_phy_set_rf_sleep" },
	{ 0xfd77ed18, "request_firmware_nowait" },
	{ 0x7fdec22e, "rtlwifi_rate_mapping" },
	{ 0x4581bf0e, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x3d3a1dae, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8f1ab59c, "rtl_rfreg_delay" },
	{ 0x9f184ea1, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0x5f2248b6, "rtl92c_phy_set_io_cmd" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa35f6fc8, "ieee80211_find_sta" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x26087e87, "rtl_cam_mark_invalid" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7f11a698, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xc45197ba, "rtl_cam_del_entry" },
	{ 0xaece4f3, "rtl_cam_empty_entry" },
	{ 0x7a79598d, "rtl92ce_phy_set_rf_on" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x22a9b2db, "rtl92c_phy_query_bb_reg" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x238fa5b6, "rtl_cam_reset_all_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xcc0ee334, "rtl_process_phyinfo" },
	{ 0x5f6dfdcc, "dm_restorepowerindex" },
	{ 0xfa215ef, "efuse_read_1byte" },
	{ 0x6b2c9521, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0x6f686ab2, "rtl92c_fill_h2c_cmd" },
	{ 0xe81e44b8, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0x299fdc38, "param_ops_ullong" },
};

MODULE_INFO(depends, "mac80211,rtlwifi,rtl8192c-common,rtl_usb");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");
