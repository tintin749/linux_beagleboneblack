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
	{ 0x93822ecb, "rc_map_dibusb_table" },
	{ 0x8ecee3c6, "dvb_usb_device_exit" },
	{ 0x30937bb4, "dvb_usb_device_init" },
	{ 0xcf5ec450, "dibusb_rc_query" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x88dd099c, "dibusb_pid_filter" },
	{ 0x34782487, "param_ops_short" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x826c3199, "dibusb2_0_power_ctrl" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc489ab3d, "dibusb_power_ctrl" },
	{ 0x24b857d7, "dibusb_streaming_ctrl" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x7ae89589, "dibusb2_0_streaming_ctrl" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xe2397248, "dibusb_i2c_algo" },
	{ 0x802ceb3e, "dibusb_pid_filter_ctrl" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb");

MODULE_ALIAS("usb:v14AAp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185BpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1Ap17DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0FA1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BB9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1025p005Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1822p3202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pA334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p701Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB2Ap17DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D7E8B040BDFB5F494215235");
