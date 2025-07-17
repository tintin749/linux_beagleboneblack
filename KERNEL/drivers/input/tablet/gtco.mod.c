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
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x20496c04, "input_free_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4cf24332, "__usb_get_extra_descriptor" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf144f336, "input_event" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x855a4eec, "usb_kill_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v078Cp0400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp0401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Cp1002d*dc*dsc*dp*ic*isc*ip*in*");
