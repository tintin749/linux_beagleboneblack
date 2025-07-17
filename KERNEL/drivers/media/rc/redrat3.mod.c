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
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xe4bccdad, "ir_raw_event_store" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf37ea5ef, "ir_raw_event_handle" },
	{ 0xef68f630, "ir_raw_event_store_with_filter" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x9d669763, "memcpy" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x2b1799ef, "led_classdev_suspend" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37ab22f, "led_classdev_resume" },
	{ 0x3c8aec3c, "usb_submit_urb" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v112Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v112Ap0005d*dc*dsc*dp*ic*isc*ip*in*");
