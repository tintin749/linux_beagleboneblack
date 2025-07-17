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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x84b183ae, "strncmp" },
	{ 0x8ecb47af, "lp55xx_unregister_sysfs" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x9f67d1d0, "lp55xx_register_sysfs" },
	{ 0xe98d470, "lp55xx_deinit_device" },
	{ 0x7e17bb61, "lp55xx_register_leds" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x1ac924ae, "lp55xx_of_populate_pdata" },
	{ 0xf739f415, "lp55xx_init_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x91452968, "_dev_err" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6cc89b70, "lp55xx_read" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa012a33e, "lp55xx_update_bits" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60fdbf02, "lp55xx_write" },
};

MODULE_INFO(depends, "leds-lp55xx-common");

MODULE_ALIAS("of:N*T*Cnational,lp5523");
MODULE_ALIAS("of:N*T*Cnational,lp5523C*");
MODULE_ALIAS("of:N*T*Cti,lp55231");
MODULE_ALIAS("of:N*T*Cti,lp55231C*");
MODULE_ALIAS("i2c:lp5523");
MODULE_ALIAS("i2c:lp55231");
