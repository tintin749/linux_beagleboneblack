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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x6531c7b, "usb_enable_autosuspend" },
	{ 0x410addcc, "of_property_read_variable_u16_array" },
	{ 0x2c9cd25d, "btbcm_set_bdaddr" },
	{ 0x9801857e, "btbcm_setup_patchram" },
	{ 0xc08b844a, "btintel_set_diag" },
	{ 0xb38c36ea, "btintel_hw_error" },
	{ 0x84f6de39, "btintel_set_bdaddr" },
	{ 0xc793142d, "btintel_set_diag_mfg" },
	{ 0x8a58d7d3, "btbcm_setup_apple" },
	{ 0xee9bd0a6, "btrtl_shutdown_realtek" },
	{ 0x28e0efa1, "btrtl_setup_realtek" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xff7bf253, "usb_match_id" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x8c3019f, "usb_driver_claim_interface" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x5c166678, "of_irq_get_byname" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0xee108bcc, "gpiod_get_optional" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x5c173d25, "hci_recv_diag" },
	{ 0x75a38389, "skb_clone" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa14e6ba, "usb_get_from_anchor" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0x3929803c, "__dev_kfree_skb_irq" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x41a215d7, "btintel_load_ddc_config" },
	{ 0x6fe1457a, "btintel_set_event_mask" },
	{ 0xb81ccb50, "btintel_set_debug_features" },
	{ 0xc28dec2, "btintel_read_debug_features" },
	{ 0xe52173bb, "btintel_send_intel_reset" },
	{ 0x52db063b, "btintel_reset_to_bootloader" },
	{ 0x1616fe8a, "btintel_download_firmware" },
	{ 0xabfbae90, "btintel_read_boot_params" },
	{ 0x3939354b, "btintel_version_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xfb0f7183, "__hci_cmd_send" },
	{ 0x3b46cd70, "device_wakeup_disable" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x966a5a84, "pm_wakeup_dev_event" },
	{ 0x18a62cde, "btintel_exit_mfg" },
	{ 0x917075d9, "btintel_check_bdaddr" },
	{ 0x7eae2daf, "btintel_set_event_mask_mfg" },
	{ 0x71c90087, "memcmp" },
	{ 0x2b128e02, "btintel_enter_mfg" },
	{ 0x8e2b99ad, "btintel_read_version" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x91452968, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x3310cb2c, "usb_queue_reset_device" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0xb720dabc, "__hci_cmd_sync_ev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x214e4265, "bt_warn" },
	{ 0x718b8b7, "bt_info" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xaf4c5fc2, "__hci_cmd_sync" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0x672e090b, "gpiod_put" },
	{ 0xaed7b306, "hci_unregister_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "btbcm,btintel,btrtl,bluetooth");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D98CF072B70C333362F9D77");
