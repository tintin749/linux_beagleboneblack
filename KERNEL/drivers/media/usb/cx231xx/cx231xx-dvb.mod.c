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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x34782487, "param_ops_short" },
	{ 0xa9adc74e, "cx231xx_unregister_extension" },
	{ 0xf63e32af, "cx231xx_register_extension" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x91452968, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0x64f19fc8, "dvb_module_probe" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2add323, "dvb_create_media_graph" },
	{ 0xe3151d0c, "dvb_net_init" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x17ea7c7, "cx231xx_tuner_callback" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x33c5971b, "cx231xx_demod_reset" },
	{ 0x440465dd, "cx231xx_get_i2c_adap" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x8377dd20, "dvb_module_release" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0x59fdc7e7, "dvb_net_release" },
	{ 0x8773569, "cx231xx_init_bulk" },
	{ 0x48e789e4, "cx231xx_init_isoc" },
	{ 0x8ca59efd, "cx231xx_set_alt_setting" },
	{ 0x38f02f60, "cx231xx_uninit_isoc" },
	{ 0x9dd3291c, "cx231xx_uninit_bulk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd1dcd4e4, "cx231xx_set_mode" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
};

MODULE_INFO(depends, "cx231xx");

