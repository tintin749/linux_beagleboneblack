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
	{ 0x7b04238d, "dibusb_read_eeprom_byte" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x8ecee3c6, "dvb_usb_device_exit" },
	{ 0x30937bb4, "dvb_usb_device_init" },
	{ 0x88dd099c, "dibusb_pid_filter" },
	{ 0x34782487, "param_ops_short" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x826c3199, "dibusb2_0_power_ctrl" },
	{ 0xc0dbaa32, "dibusb_dib3000mc_frontend_attach" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xcb46c11e, "dvb_usb_generic_rw" },
	{ 0x37a0cba, "kfree" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x328acf0d, "dibusb_dib3000mc_tuner_attach" },
	{ 0x7ae89589, "dibusb2_0_streaming_ctrl" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xe2397248, "dibusb_i2c_algo" },
	{ 0x802ceb3e, "dibusb_pid_filter_ctrl" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "68B6A847C4A739FA3E9CB84");
