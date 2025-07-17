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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x65f31437, "dvb_usbv2_resume" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0x47541a63, "cypress_load_firmware" },
	{ 0x34782487, "param_ops_short" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa12da2dc, "dvb_usbv2_probe" },
	{ 0xdf0d0056, "rc_keydown" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcbc87285, "dvb_ca_en50221_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x30a0adb1, "dvb_usbv2_disconnect" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xda06f2d, "dvb_usbv2_suspend" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xd408429b, "dvb_ca_en50221_init" },
};

MODULE_INFO(depends, "dvb_usb_v2,cypress_firmware,rc-core");

MODULE_ALIAS("usb:v13D3p0CCDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EEB4DB4E5920CDFFEEE1077");
