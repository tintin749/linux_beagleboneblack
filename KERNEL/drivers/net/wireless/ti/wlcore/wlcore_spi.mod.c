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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0x3a5fa4cf, "of_match_node" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x2673b447, "platform_device_add" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x3a0c20d6, "platform_device_add_resources" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x16380f80, "platform_device_add_data" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xbe1b2621, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,wl1271");
MODULE_ALIAS("of:N*T*Cti,wl1271C*");
MODULE_ALIAS("of:N*T*Cti,wl1273");
MODULE_ALIAS("of:N*T*Cti,wl1273C*");
MODULE_ALIAS("of:N*T*Cti,wl1281");
MODULE_ALIAS("of:N*T*Cti,wl1281C*");
MODULE_ALIAS("of:N*T*Cti,wl1283");
MODULE_ALIAS("of:N*T*Cti,wl1283C*");
MODULE_ALIAS("of:N*T*Cti,wl1285");
MODULE_ALIAS("of:N*T*Cti,wl1285C*");
MODULE_ALIAS("of:N*T*Cti,wl1801");
MODULE_ALIAS("of:N*T*Cti,wl1801C*");
MODULE_ALIAS("of:N*T*Cti,wl1805");
MODULE_ALIAS("of:N*T*Cti,wl1805C*");
MODULE_ALIAS("of:N*T*Cti,wl1807");
MODULE_ALIAS("of:N*T*Cti,wl1807C*");
MODULE_ALIAS("of:N*T*Cti,wl1831");
MODULE_ALIAS("of:N*T*Cti,wl1831C*");
MODULE_ALIAS("of:N*T*Cti,wl1835");
MODULE_ALIAS("of:N*T*Cti,wl1835C*");
MODULE_ALIAS("of:N*T*Cti,wl1837");
MODULE_ALIAS("of:N*T*Cti,wl1837C*");
