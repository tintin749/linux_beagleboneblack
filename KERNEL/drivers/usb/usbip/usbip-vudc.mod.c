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
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x44cc576, "usbip_alloc_iso_desc_pdu" },
	{ 0x8079d712, "usb_del_gadget_udc" },
	{ 0x9659277e, "usb_gadget_giveback_request" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x24796264, "usbip_event_add" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x17c82a11, "usb_gadget_udc_reset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2a5aabe5, "platform_device_del" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x2673b447, "platform_device_add" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x928b7bd8, "kernel_sock_shutdown" },
	{ 0x642a844a, "usbip_stop_eh" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x91452968, "_dev_err" },
	{ 0x7bcf8005, "fput" },
	{ 0x881f2f21, "usbip_recv_iso" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x306c65ab, "usbip_recv" },
	{ 0x84d8878f, "usb_add_gadget_udc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xc9a95149, "usb_ep_set_maxpacket_limit" },
	{ 0x3066972, "wake_up_process" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc12c60db, "usbip_recv_xbuff" },
	{ 0x7ae2f5ef, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x23000cd, "usbip_start_eh" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xaf25fafc, "usbip_pack_pdu" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xbe1b2621, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");

