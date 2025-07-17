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
	{ 0x57295083, "em28xx_unregister_extension" },
	{ 0x83939bea, "em28xx_register_extension" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x2add323, "dvb_create_media_graph" },
	{ 0xe3151d0c, "dvb_net_init" },
	{ 0xbac2c561, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0xe0962c03, "dvb_register_frontend" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x712a1276, "em28xx_write_reg" },
	{ 0xaff7ddcf, "em28xx_gpio_set" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf44d70, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0x64f19fc8, "dvb_module_probe" },
	{ 0x905304fa, "em28xx_alloc_urbs" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x8377dd20, "dvb_module_release" },
	{ 0xc41d7262, "dvb_unregister_adapter" },
	{ 0x53d28e50, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x7bb33692, "dvb_dmxdev_release" },
	{ 0x59fdc7e7, "dvb_net_release" },
	{ 0x630ab6ac, "em28xx_uninit_usb_xfer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0xc5850110, "printk" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xddbc63b2, "em28xx_setup_xc3028" },
	{ 0x5f754e5a, "memset" },
	{ 0x18f7b82a, "dvb_frontend_suspend" },
	{ 0x583108c4, "dvb_frontend_resume" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x9f696d10, "em28xx_init_usb_xfer" },
	{ 0x2cfe0ec0, "em28xx_stop_urbs" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x299af634, "em28xx_write_reg_bits" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf0ef52e8, "down" },
	{ 0x581cde4e, "up" },
	{ 0x91452968, "_dev_err" },
	{ 0xfe990052, "gpio_free" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7f8eda75, "em28xx_set_mode" },
};

MODULE_INFO(depends, "em28xx");


MODULE_INFO(srcversion, "F253941C0C7E0F6FCC751C3");
