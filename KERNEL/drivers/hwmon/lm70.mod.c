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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x53680759, "device_get_match_data" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0x3375510b, "mutex_lock_interruptible" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:lm70");
MODULE_ALIAS("spi:tmp121");
MODULE_ALIAS("spi:tmp122");
MODULE_ALIAS("spi:lm71");
MODULE_ALIAS("spi:lm74");
MODULE_ALIAS("of:N*T*Cti,lm70");
MODULE_ALIAS("of:N*T*Cti,lm70C*");
MODULE_ALIAS("of:N*T*Cti,tmp121");
MODULE_ALIAS("of:N*T*Cti,tmp121C*");
MODULE_ALIAS("of:N*T*Cti,tmp122");
MODULE_ALIAS("of:N*T*Cti,tmp122C*");
MODULE_ALIAS("of:N*T*Cti,lm71");
MODULE_ALIAS("of:N*T*Cti,lm71C*");
MODULE_ALIAS("of:N*T*Cti,lm74");
MODULE_ALIAS("of:N*T*Cti,lm74C*");
