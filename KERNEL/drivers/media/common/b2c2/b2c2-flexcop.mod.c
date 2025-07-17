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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfa7bce7c, "s5h1420_get_tuner_i2c_adapter" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0x37bb4af, "cx24113_agc_callback" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0x26193cfe, "cx24123_get_tuner_i2c_adapter" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x59fdc7e7, "dvb_net_release" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0x34782487, "param_ops_short" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0xe3151d0c, "dvb_net_init" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0xdafc31c5, "dvb_dmx_swfilter_packets" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,cx24113,cx24123");

