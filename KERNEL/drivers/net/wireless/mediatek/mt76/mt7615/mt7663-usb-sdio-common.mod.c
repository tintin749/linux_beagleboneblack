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
	{ 0x6e0ab41e, "mt7615_init_device" },
	{ 0x22e1973b, "mt7615_mac_set_rates" },
	{ 0xcab068b8, "__mt76_poll" },
	{ 0x274b2b6e, "mt7615_init_debugfs" },
	{ 0x2736e291, "ieee80211_queue_work" },
	{ 0xf173e281, "mt76_skb_adjust_pad" },
	{ 0x79d20a2f, "mt7615_pm_wake" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x83eb4e54, "mt7615_mac_write_txwi" },
	{ 0xfa27e5bb, "mt7615_mac_wtbl_update_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd39972a5, "mt7615_mac_wtbl_update_pk" },
	{ 0xed3b283e, "mt76_tx_complete_skb" },
	{ 0x57c4d49, "mt7615_rates" },
	{ 0x5f754e5a, "memset" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf3c1c379, "mt7615_mac_sta_poll" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fa34475, "mt7615_pm_power_save_sched" },
	{ 0xa35aa41f, "mt76_register_device" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xe40b66ef, "mt76_wcid_alloc" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1b024ae6, "mt7615_init_txpower" },
	{ 0x37a0cba, "kfree" },
	{ 0x1299025c, "mt76_tx_status_skb_add" },
	{ 0xf22bdec5, "mt7615_eeprom_init" },
	{ 0x2eb18b73, "mt7615_mac_wtbl_update_cipher" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
};

MODULE_INFO(depends, "mt7615-common,mt76,mac80211");

