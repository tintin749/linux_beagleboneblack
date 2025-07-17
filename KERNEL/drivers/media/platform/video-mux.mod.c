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
	{ 0xaa1d3ff6, "v4l2_subdev_link_validate" },
	{ 0x4b184772, "v4l2_subdev_get_fwnode_pad_1_to_1" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x771bea2c, "v4l2_async_register_subdev" },
	{ 0xab56bb50, "v4l2_async_subdev_notifier_register" },
	{ 0xae47dee0, "fwnode_graph_get_remote_endpoint" },
	{ 0xb19fb50a, "fwnode_graph_get_endpoint_by_id" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0xe32c5713, "v4l2_async_notifier_add_fwnode_remote_subdev" },
	{ 0x7beb5c84, "fwnode_handle_put" },
	{ 0xe41c1f53, "v4l2_async_notifier_init" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbda9d0a6, "devm_mux_control_get" },
	{ 0x9841e7e6, "of_graph_parse_endpoint" },
	{ 0xb7af413a, "of_graph_get_next_endpoint" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe6dd266, "v4l2_subdev_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc53e7170, "v4l2_create_fwnode_links" },
	{ 0xb472f54c, "v4l2_subdev_call_wrappers" },
	{ 0x91452968, "_dev_err" },
	{ 0x977a1900, "media_entity_remote_pad" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x1385e5e1, "mux_control_deselect" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xee8ffe95, "mux_control_try_select_delay" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbcf0ff44, "v4l2_async_unregister_subdev" },
	{ 0x8a53cdaf, "v4l2_async_notifier_cleanup" },
	{ 0x964b8c64, "v4l2_async_notifier_unregister" },
};

MODULE_INFO(depends, "mux-core");

MODULE_ALIAS("of:N*T*Cvideo-mux");
MODULE_ALIAS("of:N*T*Cvideo-muxC*");
