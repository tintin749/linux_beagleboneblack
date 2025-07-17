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
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3eeb830e, "usbip_event_happened" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfab5b0d0, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x97255bdf, "strlen" },
	{ 0x43145f74, "page_address" },
	{ 0x49a72281, "usb_set_configuration" },
	{ 0x44cc576, "usbip_alloc_iso_desc_pdu" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xfffa3100, "sg_next" },
	{ 0xa83b9092, "usb_hub_claim_port" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x24796264, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb7a25f4, "usbip_in_eh" },
	{ 0x569752c8, "usb_lock_device_for_reset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x1c12da46, "usb_register_device_driver" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x928b7bd8, "kernel_sock_shutdown" },
	{ 0x843491c, "device_attach" },
	{ 0x642a844a, "usbip_stop_eh" },
	{ 0x12a89680, "dev_attr_usbip_debug" },
	{ 0x91452968, "_dev_err" },
	{ 0x7bcf8005, "fput" },
	{ 0x881f2f21, "usbip_recv_iso" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xb8e524b0, "usbip_dump_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xe86c86a6, "sgl_alloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x45b31789, "driver_create_file" },
	{ 0x306c65ab, "usbip_recv" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x3066972, "wake_up_process" },
	{ 0x90dfde68, "usb_deregister_device_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc12c60db, "usbip_recv_xbuff" },
	{ 0x54ba73ad, "usb_hub_release_port" },
	{ 0x7ae2f5ef, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd55b3458, "driver_remove_file" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x23000cd, "usbip_start_eh" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xaf25fafc, "usbip_pack_pdu" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");

