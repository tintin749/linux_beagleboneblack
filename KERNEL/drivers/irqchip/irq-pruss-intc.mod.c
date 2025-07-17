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
	{ 0xf9538614, "__irq_set_handler" },
	{ 0x3dcb88a0, "irq_set_handler_data" },
	{ 0x56c3d0fa, "platform_get_irq_byname" },
	{ 0x23c6ab27, "__irq_domain_add" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf02a7658, "of_property_read_variable_u8_array" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x50992cef, "try_module_get" },
	{ 0xe864a95a, "module_put" },
	{ 0x4c411307, "handle_level_irq" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x60f01c33, "irq_set_chip_and_handler_name" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x4b4c4506, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xa0196d96, "irq_find_mapping" },
	{ 0xef3a37db, "irq_set_chained_handler_and_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,pruss-intc");
MODULE_ALIAS("of:N*T*Cti,pruss-intcC*");
MODULE_ALIAS("of:N*T*Cti,icssg-intc");
MODULE_ALIAS("of:N*T*Cti,icssg-intcC*");
