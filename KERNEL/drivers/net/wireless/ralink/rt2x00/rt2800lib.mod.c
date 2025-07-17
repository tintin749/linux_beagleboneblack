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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x811e6396, "rt2x00lib_get_bssidx" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x941d08c2, "rt2x00mac_conf_tx" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0xecb6f6d8, "rt2x00lib_txdone" },
	{ 0xff6b6eb6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9e9faffb, "rt2x00queue_get_entry" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xdabebc7, "rt2x00lib_txdone_nomatch" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x2e6ad09e, "ieee80211_restart_hw" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9b81105b, "rt2x00lib_txdone_noinfo" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb41216b0, "rt2x00lib_set_mac_address" },
	{ 0xdb72fa66, "__skb_pad" },
	{ 0xec4d9e3a, "clk_get_sys" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "5888CF82732DEABC6756D05");
