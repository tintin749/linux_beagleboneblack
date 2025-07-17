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
	{ 0x1eb23d70, "v4l2_ctrl_activate" },
	{ 0xc5850110, "printk" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x34f7689f, "aptina_pll_calculate" },
	{ 0x771bea2c, "v4l2_async_register_subdev" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0x1c252dec, "v4l2_ctrl_find" },
	{ 0x349cb25, "v4l2_ctrl_new_custom" },
	{ 0x9beab90f, "v4l2_ctrl_new_std_menu_items" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x99c9a756, "devm_regulator_bulk_get" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb7af413a, "of_graph_get_next_endpoint" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbcf0ff44, "v4l2_async_unregister_subdev" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "aptina-pll");

MODULE_ALIAS("of:N*T*Captina,mt9p031");
MODULE_ALIAS("of:N*T*Captina,mt9p031C*");
MODULE_ALIAS("of:N*T*Captina,mt9p031m");
MODULE_ALIAS("of:N*T*Captina,mt9p031mC*");
MODULE_ALIAS("i2c:mt9p031");
MODULE_ALIAS("i2c:mt9p031m");
