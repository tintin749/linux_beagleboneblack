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
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x771bea2c, "v4l2_async_register_subdev" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0x45ee3d1c, "v4l2_ctrl_new_int_menu" },
	{ 0x9beab90f, "v4l2_ctrl_new_std_menu_items" },
	{ 0x67f2d4ed, "v4l2_ctrl_new_std_menu" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x60511dd2, "v4l2_fwnode_endpoint_parse" },
	{ 0xb7af413a, "of_graph_get_next_endpoint" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0xbcf0ff44, "v4l2_async_unregister_subdev" },
	{ 0x91452968, "_dev_err" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5b316d2a, "__v4l2_ctrl_s_ctrl" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x857609a1, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xff76573f, "__v4l2_find_nearest_size" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "v4l2-fwnode");

MODULE_ALIAS("of:N*T*Covti,ov5645");
MODULE_ALIAS("of:N*T*Covti,ov5645C*");
MODULE_ALIAS("i2c:ov5645");
