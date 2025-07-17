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
	{ 0x4fe7693f, "usb_stor_post_reset" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x14cdfdc0, "usb_stor_disconnect" },
	{ 0xf144f336, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x21719c33, "usb_stor_probe2" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x810623e0, "usb_stor_host_template_init" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x41625746, "usb_stor_pre_reset" },
	{ 0xa5731e96, "usb_stor_reset_resume" },
	{ 0xc813314a, "usb_stor_suspend" },
	{ 0x20496c04, "input_free_device" },
	{ 0xbe62f667, "usb_stor_probe1" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x15915577, "usb_stor_resume" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x54ef1933, "input_allocate_device" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0D49p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D49p7010d*dc*dsc*dp*ic*isc*ip*in*");
