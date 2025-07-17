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
	{ 0x63727adc, "param_ops_ulong" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x20496c04, "input_free_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xeea0399, "strscpy" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d669763, "memcpy" },
	{ 0x76f4a540, "rc_keyup" },
	{ 0xac525d16, "rc_keydown_notimeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbc77045e, "rc_g_keycode_from_table" },
	{ 0xf144f336, "input_event" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xe2d5255a, "strcmp" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");
