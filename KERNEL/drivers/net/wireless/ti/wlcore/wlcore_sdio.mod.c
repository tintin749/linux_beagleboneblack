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
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x98b3ea, "irq_of_parse_and_map" },
	{ 0x2b8bc07d, "sdio_writesb" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0xe14825d3, "mmc_hw_reset" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xfa7533e6, "sdio_get_host_pm_caps" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x3a5fa4cf, "of_match_node" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x2673b447, "platform_device_add" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x91452968, "_dev_err" },
	{ 0x7f6abac6, "sdio_readsb" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0x3a0c20d6, "platform_device_add_resources" },
	{ 0xcc5701ff, "sdio_f0_writeb" },
	{ 0x2b3d92a6, "sdio_set_host_pm_flags" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa40a09e5, "sdio_f0_readb" },
	{ 0x16380f80, "platform_device_add_data" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x459253a9, "sdio_memcpy_toio" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0xe2393dc3, "sdio_memcpy_fromio" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0xbe1b2621, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v0097d4076*");
