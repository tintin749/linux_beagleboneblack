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
	{ 0xc404294f, "mt7615_check_offload_capability" },
	{ 0xc30e1e97, "mt7615_mcu_wait_response" },
	{ 0xcc6a0fdd, "mt7615_update_channel" },
	{ 0xf173e281, "mt76_skb_adjust_pad" },
	{ 0x3c029a24, "mt76u_stop_rx" },
	{ 0x8d9e0ab2, "mt7663_usb_sdio_tx_prepare_skb" },
	{ 0xa31960a, "mt7615_mcu_restart" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x7a966b5b, "mt76u_vendor_request" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0xcd1cb552, "mt76u_stop_tx" },
	{ 0x16467d21, "mt76u_alloc_queues" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd3d721cd, "mt7615_mcu_fill_msg" },
	{ 0x836557c, "mt7615_queue_rx_skb" },
	{ 0x21bc852a, "mt7615_mcu_set_hif_suspend" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8cf5caf8, "mt7615_ops" },
	{ 0x8563e5f0, "mt76u_init" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc3abb51e, "__mt76_poll_msec" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0xb030fe36, "mt7615_mcu_set_eeprom" },
	{ 0x69257c1c, "devm_kmemdup" },
	{ 0xe72b25c4, "mt76u_queues_deinit" },
	{ 0x9a62a2ca, "mt7615_mac_sta_remove" },
	{ 0x108cb6a6, "mt7615_mcu_msg_send" },
	{ 0xf599cd88, "mt76_free_device" },
	{ 0x669f0550, "mt76u_alloc_mcu_queue" },
	{ 0x6e0015d4, "mt7615_mac_init" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x8f43b28e, "mt7663_usb_sdio_register_device" },
	{ 0x7f5b30e5, "mt7615_phy_init" },
	{ 0x9669a2c3, "mt76_alloc_device" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x4a8a9ced, "mt7615_mac_sta_add" },
	{ 0x82efe123, "mt76u_resume_rx" },
	{ 0x6ae8167f, "mt7615_mcu_del_wtbl_all" },
	{ 0xb9efa709, "mt7663_usb_sdio_tx_complete_skb" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xe650a4c2, "__mt7663_load_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4fad61, "consume_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x1506ffca, "mt7663_usb_sdio_reg_map" },
	{ 0x3811f9af, "mt7663_usb_sdio_tx_status_data" },
	{ 0x50cec930, "mt7615_sta_ps" },
};

MODULE_INFO(depends, "mt7615-common,mt76,mt76-usb,mt7663-usb-sdio-common,mac80211");

MODULE_ALIAS("usb:v0E8Dp7663d*dc*dsc*dp*icFFiscFFipFFin*");
