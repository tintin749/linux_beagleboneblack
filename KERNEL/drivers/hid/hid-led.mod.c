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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd4e2b04c, "devm_led_classdev_register_ext" },
	{ 0xc358aaf8, "snprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001294p00001320");
MODULE_ALIAS("hid:b0003g*v00001D34p00000004");
MODULE_ALIAS("hid:b0003g*v00001D34p0000000A");
MODULE_ALIAS("hid:b0003g*v000027B8p000001ED");
MODULE_ALIAS("hid:b0003g*v00000FC5p0000B080");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F372");
