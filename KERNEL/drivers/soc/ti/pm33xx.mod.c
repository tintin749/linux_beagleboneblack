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
	{ 0xc96fb674, "nvmem_device_read" },
	{ 0x41dcc099, "rtc_class_open" },
	{ 0x8252c453, "of_iomap" },
	{ 0x49a8a623, "ti_emif_get_mem_type" },
	{ 0xab52080f, "of_clk_get_by_name" },
	{ 0x9f4dd095, "of_device_is_available" },
	{ 0x2a975493, "of_find_node_by_name" },
	{ 0x2f5b0fdb, "gen_pool_alloc_algo_owner" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x3db9b00, "of_gen_pool_get" },
	{ 0xb5492905, "of_find_compatible_node" },
	{ 0x776afbe0, "wkup_m3_ipc_get" },
	{ 0xe97c4103, "ioremap" },
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0x6259d291, "clk_restore_context" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xa531471e, "clk_save_context" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc5850110, "printk" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xbcf322c5, "ti_emif_copy_pm_function_table" },
	{ 0xfa03858a, "sram_exec_copy" },
	{ 0x90609db6, "gen_pool_virt_to_phys" },
	{ 0x700c37a9, "omap_rtc_power_off_program" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe18960ba, "nvmem_device_write" },
	{ 0xf17610e4, "devm_nvmem_device_get" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x166e6f4c, "wkup_m3_ipc_put" },
	{ 0x9ac11b74, "suspend_set_ops" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "wkup_m3_ipc");

