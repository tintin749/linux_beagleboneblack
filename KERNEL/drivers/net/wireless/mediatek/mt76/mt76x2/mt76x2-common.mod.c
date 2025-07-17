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
	{ 0x8695f703, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x36b4e2a3, "mt76x02_phy_set_txpower" },
	{ 0x97ca12dc, "mt76x02_mcu_calibrate" },
	{ 0x607673d8, "mt76x02_eeprom_copy" },
	{ 0x5f754e5a, "memset" },
	{ 0x258a40bb, "mt76x02_get_lna_gain" },
	{ 0x97ae9cc4, "mt76_eeprom_override" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xd2b40985, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0xcccba274, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0x8dd183dd, "mt76x02_get_rx_gain" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfa808fa7, "mt76x02_get_efuse_data" },
	{ 0xd1c8c8ae, "mt76x02_ext_pa_enabled" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xf36b41b, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xcc641acc, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");

