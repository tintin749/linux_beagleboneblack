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
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x78eea100, "snd_tea575x_exit" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0xaab16b0e, "snd_tea575x_init" },
	{ 0xeea0399, "strscpy" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0xfc0cec58, "v4l2_device_set_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ea39136, "usb_interrupt_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x4540207, "snd_tea575x_set_freq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "tea575x");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");
