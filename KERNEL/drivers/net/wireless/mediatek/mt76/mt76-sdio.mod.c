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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf173e281, "mt76_skb_adjust_pad" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa1e4a560, "mt76_rx_poll_complete" },
	{ 0x94c7cc09, "mt76_queue_tx_complete" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x979bc35d, "mt76_txq_schedule" },
	{ 0x8ac5253e, "mt76_tx_status_check" },
	{ 0xa0175e2, "ieee80211_wake_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4fad61, "consume_skb" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2b32fd4d, "sdio_release_host" },
};

MODULE_INFO(depends, "mt76,mac80211");

