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
	{ 0x5a726700, "v4l2_event_subdev_unsubscribe" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x771bea2c, "v4l2_async_register_subdev" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x9beab90f, "v4l2_ctrl_new_std_menu_items" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x60511dd2, "v4l2_fwnode_endpoint_parse" },
	{ 0x2d6b189b, "of_graph_get_endpoint_by_regs" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x21162efb, "regmap_bulk_read" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9841e7e6, "of_graph_parse_endpoint" },
	{ 0xd9140a77, "v4l2_fwnode_connector_add_link" },
	{ 0xac7f1745, "v4l2_fwnode_connector_parse" },
	{ 0xb7af413a, "of_graph_get_next_endpoint" },
	{ 0x6723e646, "of_graph_get_endpoint_count" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x1da20126, "media_entity_find_link" },
	{ 0x977a1900, "media_entity_remote_pad" },
	{ 0x7c65d38d, "media_create_pad_link" },
	{ 0x7a09f1c3, "media_device_register_entity" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x91452968, "_dev_err" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0xbcf0ff44, "v4l2_async_unregister_subdev" },
	{ 0xb57a311a, "media_device_unregister_entity" },
	{ 0x612ddce5, "v4l2_fwnode_connector_free" },
	{ 0x5d3c16de, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x5b673c44, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x5f754e5a, "memset" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x41fcd6e1, "v4l2_subdev_notify_event" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xfe25a832, "dev_printk" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cti,tvp5150");
MODULE_ALIAS("of:N*T*Cti,tvp5150C*");
MODULE_ALIAS("i2c:tvp5150");
