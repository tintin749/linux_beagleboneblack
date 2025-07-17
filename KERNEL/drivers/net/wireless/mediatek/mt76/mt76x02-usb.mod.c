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
	{ 0xcab068b8, "__mt76_poll" },
	{ 0xaa152108, "hrtimer_active" },
	{ 0xe947aa7f, "mt76x02_mac_set_beacon" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xf173e281, "mt76_skb_adjust_pad" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x7a966b5b, "mt76u_vendor_request" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xed3b283e, "mt76_tx_complete_skb" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x3edcb66, "mt76x02_mac_write_txwi" },
	{ 0xd29bdeb7, "mt76x02_init_beacon_config" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2aa76f66, "mt76_csa_finish" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x14fe2a27, "ieee80211_get_hdrlen_from_skb" },
	{ 0xce881746, "mt76x02_mac_reset_counters" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xec5d4020, "mt76u_single_wr" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0x1299025c, "mt76_tx_status_skb_add" },
	{ 0x75a18601, "mt76_csa_check" },
	{ 0xb7f8b08f, "mt76_mcu_msg_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xd2e8c806, "mt76x02_resync_beacon_timer" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x738c0b10, "skb_put" },
	{ 0x71040d5f, "mt76x02_remove_hdr_pad" },
	{ 0xbd071eeb, "mt76x02_enqueue_buffered_bc" },
	{ 0x9aa512e5, "ieee80211_iterate_interfaces" },
	{ 0x5a718d86, "mt76x02_update_beacon_iter" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib,mt76-usb,cfg80211,mac80211");

