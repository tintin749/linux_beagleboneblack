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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x7cc57754, "syscon_node_to_regmap" },
	{ 0x483a055b, "device_create_file" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe428104e, "device_remove_file" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cimg,boston-lcd");
MODULE_ALIAS("of:N*T*Cimg,boston-lcdC*");
MODULE_ALIAS("of:N*T*Cmti,malta-lcd");
MODULE_ALIAS("of:N*T*Cmti,malta-lcdC*");
MODULE_ALIAS("of:N*T*Cmti,sead3-lcd");
MODULE_ALIAS("of:N*T*Cmti,sead3-lcdC*");
