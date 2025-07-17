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
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x2a5aabe5, "platform_device_del" },
	{ 0x2673b447, "platform_device_add" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x16380f80, "platform_device_add_data" },
	{ 0xbe1b2621, "platform_device_put" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x89b273f1, "sg_miter_stop" },
	{ 0xadae8bd2, "sg_miter_next" },
	{ 0xfc064e46, "sg_miter_start" },
	{ 0xf52fbd0, "usb_hcd_giveback_urb" },
	{ 0x4ab00add, "usb_hcd_unlink_urb_from_ep" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x84d8878f, "usb_add_gadget_udc" },
	{ 0xc9a95149, "usb_ep_set_maxpacket_limit" },
	{ 0x5f754e5a, "memset" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x10a7cf97, "usb_hcd_link_urb_to_ep" },
	{ 0x9d669763, "memcpy" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf84e70e1, "usb_hcd_resume_root_hub" },
	{ 0x12a38747, "usleep_range" },
	{ 0x17c82a11, "usb_gadget_udc_reset" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x9659277e, "usb_gadget_giveback_request" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x483a055b, "device_create_file" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf4a44ac, "usb_hcd_is_primary_hcd" },
	{ 0x8b992dff, "usb_hcd_check_unlink_urb" },
	{ 0x80c1ee2a, "usb_create_shared_hcd" },
	{ 0x9e3818d0, "usb_add_hcd" },
	{ 0x429a5aa, "usb_create_hcd" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xba3eabbc, "usb_put_hcd" },
	{ 0x64158cc1, "usb_remove_hcd" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x128b89dd, "usb_hcd_poll_rh_status" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x1a146ec3, "usb_ep_type_string" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x8079d712, "usb_del_gadget_udc" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

