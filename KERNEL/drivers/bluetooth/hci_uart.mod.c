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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x5c173d25, "hci_recv_diag" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x31981d17, "debugfs_create_u8" },
	{ 0xaf4c5fc2, "__hci_cmd_sync" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2b128e02, "btintel_enter_mfg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0x214e4265, "bt_warn" },
	{ 0xe51425d8, "qca_set_bdaddr" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x30d1151d, "qca_set_bdaddr_rome" },
	{ 0xb3e9329d, "rcuwait_wake_up" },
	{ 0x367543d4, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xcc6f0f73, "hci_reset_dev" },
	{ 0xd3fbfefd, "tty_unthrottle" },
	{ 0x2c9cd25d, "btbcm_set_bdaddr" },
	{ 0x384618b7, "btbcm_write_pcm_int_params" },
	{ 0xf4c6492e, "__percpu_down_read" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x8cbc0ee, "serdev_device_close" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c166678, "of_irq_get_byname" },
	{ 0x2e89efbd, "qca_read_soc_version" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x9e2baeb8, "desc_to_gpio" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x999e8297, "vfree" },
	{ 0xaed7b306, "hci_unregister_dev" },
	{ 0xb720dabc, "__hci_cmd_sync_ev" },
	{ 0x1a7d4790, "devm_clk_get_optional" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf0346c8f, "serdev_device_write_buf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xabfbae90, "btintel_read_boot_params" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x718b8b7, "bt_info" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x1db51a82, "serdev_device_set_tiocm" },
	{ 0x584c7a2d, "debugfs_create_u32" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x81b60b99, "qca_uart_setup" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xfac0d797, "__serdev_device_driver_register" },
	{ 0x81fd7db5, "serdev_device_wait_until_sent" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7fcc799a, "dev_coredumpv" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x5aaf6490, "__percpu_init_rwsem" },
	{ 0x3e90c864, "tty_ldisc_flush" },
	{ 0x7eae2daf, "btintel_set_event_mask_mfg" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xc2b79275, "debugfs_create_u64" },
	{ 0x7eb8bf11, "n_tty_ioctl_helper" },
	{ 0x41a215d7, "btintel_load_ddc_config" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcbcbead6, "device_property_read_string" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6b9c1ccf, "serdev_device_get_tiocm" },
	{ 0x6c7f6cf0, "serdev_device_write_flush" },
	{ 0xede089d5, "devm_clk_put" },
	{ 0x7616fa77, "device_property_read_u8_array" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0x74569831, "debugfs_create_bool" },
	{ 0x3530a2aa, "device_wakeup_enable" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc93fb39b, "regulator_set_load" },
	{ 0x4ca77772, "percpu_up_write" },
	{ 0x9cd7cb21, "btbcm_read_pcm_int_params" },
	{ 0x3b46cd70, "device_wakeup_disable" },
	{ 0xe9a7fe16, "nvmem_cell_read" },
	{ 0xe864a95a, "module_put" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xc08b844a, "btintel_set_diag" },
	{ 0x18a62cde, "btintel_exit_mfg" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xeb56f9e4, "tty_driver_flush_buffer" },
	{ 0x254ebc4d, "devm_free_irq" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xcbf650db, "btrtl_get_uart_settings" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x1f01ffd8, "device_reprobe" },
	{ 0xaf78f260, "btrtl_free" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x210bf8a5, "serdev_device_set_parity" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x84f6de39, "btintel_set_bdaddr" },
	{ 0x607c184d, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x3939354b, "btintel_version_info" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4e669af8, "serdev_device_open" },
	{ 0x57b4c6b1, "qca_send_pre_shutdown_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e2b99ad, "btintel_read_version" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0xd808ee30, "btrtl_initialize" },
	{ 0x5200fdbf, "serdev_device_set_flow_control" },
	{ 0x57e31e1d, "btbcm_initialize" },
	{ 0x1616fe8a, "btintel_download_firmware" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x7cfa6b06, "nvmem_cell_get" },
	{ 0xe52173bb, "btintel_send_intel_reset" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe645d1a, "btrtl_download_firmware" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf1c5c20a, "btbcm_finalize" },
	{ 0x917075d9, "btintel_check_bdaddr" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xcbad3000, "serdev_device_set_baudrate" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x6d0bb9d8, "percpu_down_write" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4ffdb9f6, "device_set_wakeup_capable" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x4a2d8b88, "tty_set_termios" },
	{ 0xbcedda5b, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btintel,btqca,btbcm,btrtl");

MODULE_ALIAS("of:N*T*Cmrvl,88w8897");
MODULE_ALIAS("of:N*T*Cmrvl,88w8897C*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8822cs-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8822cs-btC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723bs-bt");
MODULE_ALIAS("of:N*T*Crealtek,rtl8723bs-btC*");
MODULE_ALIAS("of:N*T*Cti,cc2560");
MODULE_ALIAS("of:N*T*Cti,cc2560C*");
MODULE_ALIAS("of:N*T*Cti,wl1271-st");
MODULE_ALIAS("of:N*T*Cti,wl1271-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1273-st");
MODULE_ALIAS("of:N*T*Cti,wl1273-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1281-st");
MODULE_ALIAS("of:N*T*Cti,wl1281-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1283-st");
MODULE_ALIAS("of:N*T*Cti,wl1283-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1285-st");
MODULE_ALIAS("of:N*T*Cti,wl1285-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1801-st");
MODULE_ALIAS("of:N*T*Cti,wl1801-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1805-st");
MODULE_ALIAS("of:N*T*Cti,wl1805-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1807-st");
MODULE_ALIAS("of:N*T*Cti,wl1807-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1831-st");
MODULE_ALIAS("of:N*T*Cti,wl1831-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1835-st");
MODULE_ALIAS("of:N*T*Cti,wl1835-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1837-st");
MODULE_ALIAS("of:N*T*Cti,wl1837-stC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1");
MODULE_ALIAS("of:N*T*Cbrcm,bcm20702a1C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4329-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4345c5C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4330-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43438-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4349-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-bt");
MODULE_ALIAS("of:N*T*Cbrcm,bcm43540-btC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4335a0C*");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-bt");
MODULE_ALIAS("of:N*T*Cinfineon,cyw55572-btC*");
MODULE_ALIAS("of:N*T*Cqcom,qca6174-bt");
MODULE_ALIAS("of:N*T*Cqcom,qca6174-btC*");
MODULE_ALIAS("of:N*T*Cqcom,qca6390-bt");
MODULE_ALIAS("of:N*T*Cqcom,qca6390-btC*");
MODULE_ALIAS("of:N*T*Cqcom,qca9377-bt");
MODULE_ALIAS("of:N*T*Cqcom,qca9377-btC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn3990-bt");
MODULE_ALIAS("of:N*T*Cqcom,wcn3990-btC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn3991-bt");
MODULE_ALIAS("of:N*T*Cqcom,wcn3991-btC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn3998-bt");
MODULE_ALIAS("of:N*T*Cqcom,wcn3998-btC*");

MODULE_INFO(srcversion, "EE3011E2DD4106284C263C4");
