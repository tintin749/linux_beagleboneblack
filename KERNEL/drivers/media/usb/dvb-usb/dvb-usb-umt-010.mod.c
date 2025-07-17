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
	{ 0x8ecee3c6, "dvb_usb_device_exit" },
	{ 0x30937bb4, "dvb_usb_device_init" },
	{ 0x34782487, "param_ops_short" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc489ab3d, "dibusb_power_ctrl" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x7ae89589, "dibusb2_0_streaming_ctrl" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xe2397248, "dibusb_i2c_algo" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dvb-usb,dvb-usb-dibusb-common");

MODULE_ALIAS("usb:v15F4p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15F4p0015d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8908978C21FF9FBE23BAC48");
