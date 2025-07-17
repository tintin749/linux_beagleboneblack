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
	{ 0xfa07c9d3, "dma_map_sg_attrs" },
	{ 0xdd226fa9, "__raw_readsw" },
	{ 0xf7163ec9, "__raw_readsb" },
	{ 0xeb03b389, "__raw_readsl" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3ac8e748, "mtd_ooblayout_get_eccbytes" },
	{ 0x66dc2afc, "nand_bch_init" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0xaa071f64, "dma_unmap_sg_attrs" },
	{ 0x70097aa0, "nand_bch_free" },
	{ 0x904b802b, "nand_prog_page_end_op" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0xdad97f94, "__raw_writesw" },
	{ 0x1324f52a, "nand_prog_page_begin_op" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0xfed19014, "dma_request_chan" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1121eb6b, "nand_soft_waitrdy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xddcb8963, "soc_device_match" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x4e98a50a, "nand_cleanup" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1bc40a8d, "gpmc_omap_get_nand_ops" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xb18cd823, "nand_scan_with_ids" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc17155ce, "mtd_device_parse_register" },
	{ 0xf0ed2ef4, "__raw_writesb" },
	{ 0x55f90c95, "nand_bch_correct_data" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xc79766d3, "mtd_ooblayout_set_eccbytes" },
	{ 0xee410347, "nand_read_page_op" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xecf8a3b4, "__raw_writesl" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0xc616a3e6, "dma_release_channel" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x77d0a214, "nand_gpio_waitrdy" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x60c1de73, "nand_change_read_column_op" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc37335b0, "complete" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xf364095d, "mtd_device_unregister" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,omap2-nand");
MODULE_ALIAS("of:N*T*Cti,omap2-nandC*");
MODULE_ALIAS("of:N*T*Cti,am64-nand");
MODULE_ALIAS("of:N*T*Cti,am64-nandC*");
