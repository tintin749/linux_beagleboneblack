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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x63779770, "of_property_read_string_helper" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x83d2a225, "single_open" },
	{ 0xc96ec9e, "of_property_read_u32_index" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0x7da3f555, "pruss_cfg_read" },
	{ 0x29762e0c, "single_release" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xde0ce9bc, "rproc_vq_interrupt" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x88fb816d, "pruss_cfg_update" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x9f4dd095, "of_device_is_available" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0x2d3782fc, "rproc_elf_load_rsc_table" },
	{ 0x3a025d2e, "devm_rproc_add" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xa7427670, "of_get_child_by_name" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x56c3d0fa, "platform_get_irq_byname" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0x29bc09a0, "rproc_set_firmware" },
	{ 0x23c84496, "devm_rproc_alloc" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x607c184d, "get_device" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0xd0ef60aa, "of_get_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa602363, "of_find_device_by_node" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0x8d749f05, "irq_create_fwspec_mapping" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb88dbfce, "irq_set_irqchip_state" },
};

MODULE_INFO(depends, "pruss");

MODULE_ALIAS("of:N*T*Cti,am3356-pru");
MODULE_ALIAS("of:N*T*Cti,am3356-pruC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pru");
MODULE_ALIAS("of:N*T*Cti,am4376-pruC*");
MODULE_ALIAS("of:N*T*Cti,am5728-pru");
MODULE_ALIAS("of:N*T*Cti,am5728-pruC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pru");
MODULE_ALIAS("of:N*T*Cti,k2g-pruC*");
MODULE_ALIAS("of:N*T*Cti,am654-pru");
MODULE_ALIAS("of:N*T*Cti,am654-pruC*");
MODULE_ALIAS("of:N*T*Cti,am654-rtu");
MODULE_ALIAS("of:N*T*Cti,am654-rtuC*");
MODULE_ALIAS("of:N*T*Cti,am654-tx-pru");
MODULE_ALIAS("of:N*T*Cti,am654-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,j721e-pru");
MODULE_ALIAS("of:N*T*Cti,j721e-pruC*");
MODULE_ALIAS("of:N*T*Cti,j721e-rtu");
MODULE_ALIAS("of:N*T*Cti,j721e-rtuC*");
MODULE_ALIAS("of:N*T*Cti,j721e-tx-pru");
MODULE_ALIAS("of:N*T*Cti,j721e-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,am642-pru");
MODULE_ALIAS("of:N*T*Cti,am642-pruC*");
MODULE_ALIAS("of:N*T*Cti,am642-rtu");
MODULE_ALIAS("of:N*T*Cti,am642-rtuC*");
MODULE_ALIAS("of:N*T*Cti,am642-tx-pru");
MODULE_ALIAS("of:N*T*Cti,am642-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,am625-pru");
MODULE_ALIAS("of:N*T*Cti,am625-pruC*");
