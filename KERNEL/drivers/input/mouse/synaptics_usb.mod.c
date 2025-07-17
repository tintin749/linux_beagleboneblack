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
	{ 0x47c19580, "input_register_device" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20496c04, "input_free_device" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf144f336, "input_event" },
	{ 0x91452968, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v06CBp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CBp0013d*dc*dsc*dp*ic*isc*ip*in*");
