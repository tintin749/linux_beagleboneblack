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
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7beb5c84, "fwnode_handle_put" },
	{ 0xd4e2b04c, "devm_led_classdev_register_ext" },
	{ 0x8008f32a, "fwnode_property_read_string" },
	{ 0xf45998ae, "device_get_next_child_node" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x3a144459, "device_get_child_node_count" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clltc,lt3593");
MODULE_ALIAS("of:N*T*Clltc,lt3593C*");
