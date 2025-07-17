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
	{ 0x28b030d2, "of_overlay_notifier_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x46f359e, "of_overlay_notifier_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x13692698, "fpga_region_program_fpga" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xcd4e017d, "devm_kstrdup" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x60ac3bbc, "fpga_image_info_alloc" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0x414159bd, "of_find_matching_node_and_match" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xa31ddc2f, "fpga_image_info_free" },
	{ 0x2c8167cf, "fpga_bridges_disable" },
	{ 0xcf152f77, "fpga_region_class_find" },
	{ 0xb9a954cb, "device_match_of_node" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x9044a030, "of_platform_populate" },
	{ 0x71d7a0d1, "fpga_region_register" },
	{ 0xc14312bc, "devm_fpga_region_create" },
	{ 0xf4753948, "of_fpga_mgr_get" },
	{ 0x48000e5b, "of_get_next_parent" },
	{ 0x2c7be11f, "of_device_is_compatible" },
	{ 0x6c417e80, "of_node_get" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0x45c5c60a, "of_fpga_bridge_get_to_list" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xfe26b31a, "fpga_mgr_put" },
	{ 0x206972c8, "fpga_region_unregister" },
};

MODULE_INFO(depends, "fpga-region,fpga-mgr,fpga-bridge");

MODULE_ALIAS("of:N*T*Cfpga-region");
MODULE_ALIAS("of:N*T*Cfpga-regionC*");
