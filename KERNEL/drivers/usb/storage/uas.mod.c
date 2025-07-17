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
	{ 0x564b0c40, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x71a9be68, "sdev_prefix_printk" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x110ef013, "scsi_add_host_with_dma" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f7c629d, "scsi_host_alloc" },
	{ 0x98d383d2, "usb_stor_adjust_quirks" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x569752c8, "usb_lock_device_for_reset" },
	{ 0xd3949849, "scsi_host_put" },
	{ 0xec57b011, "scsi_remove_host" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9d669763, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xd5229dc5, "blk_queue_max_hw_sectors" },
	{ 0x6ae63502, "blk_queue_update_dma_alignment" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x2fe6ca90, "usb_get_urb" },
	{ 0x5741eb93, "scsi_change_queue_depth" },
	{ 0xf39c10b5, "scsi_is_host_device" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x25360695, "scsi_scan_host" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xa46f80e9, "scsi_print_command" },
	{ 0xbf6689c, "scmd_printk" },
	{ 0x719cffc7, "scsi_block_requests" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x92b57248, "flush_work" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x3920a27d, "scsi_unblock_requests" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xb7f1b3d7, "scsi_report_bus_reset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xbdd66d83, "usb_alloc_streams" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6e067c47, "usb_free_streams" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp1061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v090Cp2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1932d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp3899d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");
