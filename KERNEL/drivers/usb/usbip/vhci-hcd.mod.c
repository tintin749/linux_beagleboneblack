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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3eeb830e, "usbip_event_happened" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x80c1ee2a, "usb_create_shared_hcd" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x9e3818d0, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0x64158cc1, "usb_remove_hcd" },
	{ 0x43145f74, "page_address" },
	{ 0x429a5aa, "usb_create_hcd" },
	{ 0x128b89dd, "usb_hcd_poll_rh_status" },
	{ 0x44cc576, "usbip_alloc_iso_desc_pdu" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xfffa3100, "sg_next" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf52fbd0, "usb_hcd_giveback_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xba3eabbc, "usb_put_hcd" },
	{ 0x24796264, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xdf4a44ac, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x10a7cf97, "usb_hcd_link_urb_to_ep" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x2a5aabe5, "platform_device_del" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x2673b447, "platform_device_add" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x928b7bd8, "kernel_sock_shutdown" },
	{ 0x642a844a, "usbip_stop_eh" },
	{ 0x12a89680, "dev_attr_usbip_debug" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xfa6d327e, "sysfs_remove_link" },
	{ 0x91452968, "_dev_err" },
	{ 0x7bcf8005, "fput" },
	{ 0x881f2f21, "usbip_recv_iso" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x10b8b0f8, "usbip_pad_iso" },
	{ 0x8b992dff, "usb_hcd_check_unlink_urb" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb8e524b0, "usbip_dump_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x306c65ab, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x3066972, "wake_up_process" },
	{ 0xc8c65420, "platform_bus" },
	{ 0x16380f80, "platform_device_add_data" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xc12c60db, "usbip_recv_xbuff" },
	{ 0x7ae2f5ef, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x4ab00add, "usb_hcd_unlink_urb_from_ep" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xf84e70e1, "usb_hcd_resume_root_hub" },
	{ 0x23000cd, "usbip_start_eh" },
	{ 0xaf25fafc, "usbip_pack_pdu" },
	{ 0xbe1b2621, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");

