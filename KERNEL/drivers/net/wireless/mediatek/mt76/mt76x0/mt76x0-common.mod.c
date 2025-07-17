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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x8695f703, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xe0fb5a0c, "mt76x02_phy_set_txdac" },
	{ 0xcab068b8, "__mt76_poll" },
	{ 0x4d3d6d5c, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x36b4e2a3, "mt76x02_phy_set_txpower" },
	{ 0x82b76aaf, "mt76x02_mcu_function_select" },
	{ 0x97ca12dc, "mt76x02_mcu_calibrate" },
	{ 0x607673d8, "mt76x02_eeprom_copy" },
	{ 0xb5616ed1, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x49af777e, "mt76x02_dfs_init_params" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fffad26, "mt76_txq_schedule_all" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa4ae30c, "mt76x02_init_agc_gain" },
	{ 0xb0d1eadf, "mt76x02_mac_cc_reset" },
	{ 0x83d179f7, "ieee80211_stop_queues" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xda54193b, "mt76x02_init_debugfs" },
	{ 0x258a40bb, "mt76x02_get_lna_gain" },
	{ 0x97ae9cc4, "mt76_eeprom_override" },
	{ 0xb586f328, "mt76x02_edcca_init" },
	{ 0xc16cf34a, "mt76x02_phy_set_rxpath" },
	{ 0xd2b40985, "mt76x02_eeprom_parse_hw_cap" },
	{ 0xee337330, "ieee80211_wake_queues" },
	{ 0xc3abb51e, "__mt76_poll_msec" },
	{ 0xa4364368, "mt76x02_init_device" },
	{ 0xc50eb6c, "mt76_set_channel" },
	{ 0x707b5bcf, "mt76x02_phy_set_band" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x783d8371, "mt76x02_phy_set_bw" },
	{ 0xa35aa41f, "mt76_register_device" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x66053232, "mt76x02_mac_setaddr" },
	{ 0x91452968, "_dev_err" },
	{ 0xcccba274, "mt76_eeprom_init" },
	{ 0xf60848b3, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x8dd183dd, "mt76x02_get_rx_gain" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfa808fa7, "mt76x02_get_efuse_data" },
	{ 0xd1c8c8ae, "mt76x02_ext_pa_enabled" },
	{ 0xe15663bf, "mt76x02_mac_shared_key_setup" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf36b41b, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xcc641acc, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");

