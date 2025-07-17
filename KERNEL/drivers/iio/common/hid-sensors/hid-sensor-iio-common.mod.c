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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf0ac456a, "sensor_hub_get_feature" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb945e0dd, "sensor_hub_input_get_attribute_info" },
	{ 0x1af267f8, "int_pow" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7acd29d7, "sensor_hub_set_feature" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "hid-sensor-hub");

