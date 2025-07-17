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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x7931ca86, "__i2c_smbus_xfer" },
	{ 0x91452968, "_dev_err" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x483a055b, "device_create_file" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x61f90f46, "device_property_present" },
	{ 0x9e826401, "i2c_mux_add_adapter" },
	{ 0x60f01c33, "irq_set_chip_and_handler_name" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x653333fe, "irq_create_mapping_affinity" },
	{ 0xd718d606, "handle_simple_irq" },
	{ 0x23c6ab27, "__irq_domain_add" },
	{ 0x4dc4fe5c, "irq_domain_simple_ops" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0xb2339440, "i2c_get_device_id" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x33409398, "i2c_mux_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xb9fac3a0, "i2c_smbus_read_byte" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x19b00bab, "i2c_mux_del_adapters" },
	{ 0x4b4c4506, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xa0196d96, "irq_find_mapping" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");
