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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xc404294f, "mt7615_check_offload_capability" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x332ad9b8, "mt76s_deinit" },
	{ 0x43145f74, "page_address" },
	{ 0xc30e1e97, "mt7615_mcu_wait_response" },
	{ 0x2b8bc07d, "sdio_writesb" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0xcc6a0fdd, "mt7615_update_channel" },
	{ 0x8d9e0ab2, "mt7663_usb_sdio_tx_prepare_skb" },
	{ 0xa31960a, "mt7615_mcu_restart" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb394081d, "ieee80211_unregister_hw" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd3d721cd, "mt7615_mcu_fill_msg" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x92e8ef35, "__tracepoint_dev_irq" },
	{ 0xf9be0dec, "mt7615_mcu_reg_rr" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x836557c, "mt7615_queue_rx_skb" },
	{ 0x21bc852a, "mt7615_mcu_set_hif_suspend" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2799bd25, "sdio_writel" },
	{ 0x5f754e5a, "memset" },
	{ 0x8cf5caf8, "mt7615_ops" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc3abb51e, "__mt76_poll_msec" },
	{ 0x875564aa, "sdio_readl" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1bd46001, "mt76s_alloc_queues" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x91452968, "_dev_err" },
	{ 0xb030fe36, "mt7615_mcu_set_eeprom" },
	{ 0x69257c1c, "devm_kmemdup" },
	{ 0x9a62a2ca, "mt7615_mac_sta_remove" },
	{ 0xed5a4850, "mt7615_mcu_reg_wr" },
	{ 0x7f6abac6, "sdio_readsb" },
	{ 0x49b300e1, "mt76s_init" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0x2b3d92a6, "sdio_set_host_pm_flags" },
	{ 0x108cb6a6, "mt7615_mcu_msg_send" },
	{ 0xf599cd88, "mt76_free_device" },
	{ 0x6e0015d4, "mt7615_mac_init" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x41f6d93a, "mt76s_stop_txrx" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8f43b28e, "mt7663_usb_sdio_register_device" },
	{ 0x7f5b30e5, "mt7615_phy_init" },
	{ 0x9669a2c3, "mt76_alloc_device" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x4a8a9ced, "mt7615_mac_sta_add" },
	{ 0x6ae8167f, "mt7615_mcu_del_wtbl_all" },
	{ 0x9d669763, "memcpy" },
	{ 0xb9efa709, "mt7663_usb_sdio_tx_complete_skb" },
	{ 0x495d3be5, "skb_add_rx_frag" },
	{ 0x9c9a1c27, "__traceiter_dev_irq" },
	{ 0xe650a4c2, "__mt7663_load_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x1506ffca, "mt7663_usb_sdio_reg_map" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x3811f9af, "mt7663_usb_sdio_tx_status_data" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0x50cec930, "mt7615_sta_ps" },
};

MODULE_INFO(depends, "mt7615-common,mt76-sdio,mt7663-usb-sdio-common,mac80211,mt76");

MODULE_ALIAS("sdio:c*v037Ad7603*");
