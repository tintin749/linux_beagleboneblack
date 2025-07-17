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
	{ 0x8fdab0a2, "drm_atomic_helper_connector_destroy_state" },
	{ 0xa125d2e6, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x3d1f3a93, "drm_connector_cleanup" },
	{ 0xef37252f, "drm_helper_probe_single_connector_modes" },
	{ 0x45122fa9, "drm_atomic_helper_connector_reset" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x4a03f984, "drm_connector_attach_encoder" },
	{ 0xb2ef6572, "drm_connector_init_with_ddc" },
	{ 0x4acd40be, "drm_bridge_attach" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x91452968, "_dev_err" },
	{ 0x463b4ec2, "drm_bridge_add" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x7de3355d, "of_drm_find_bridge" },
	{ 0xf802d946, "of_graph_get_remote_node" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x858f056d, "drm_set_preferred_mode" },
	{ 0x24e0ccb3, "drm_add_modes_noedid" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfd436b4, "drm_add_edid_modes" },
	{ 0x46cf2152, "drm_connector_update_edid_property" },
	{ 0x48a4b7ec, "drm_bridge_get_edid" },
	{ 0x83612f48, "drm_bridge_detect" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xdc29c2c4, "drm_bridge_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");
