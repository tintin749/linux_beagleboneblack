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
	{ 0x355c6ba6, "_dev_info" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0x4c411307, "handle_level_irq" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xa0196d96, "irq_find_mapping" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb9fac3a0, "i2c_smbus_read_byte" },
	{ 0x91452968, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8574");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574a");
MODULE_ALIAS("of:N*T*Cnxp,pcf8574aC*");
MODULE_ALIAS("of:N*T*Cnxp,pca8574");
MODULE_ALIAS("of:N*T*Cnxp,pca8574C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9670");
MODULE_ALIAS("of:N*T*Cnxp,pca9670C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9672");
MODULE_ALIAS("of:N*T*Cnxp,pca9672C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9674");
MODULE_ALIAS("of:N*T*Cnxp,pca9674C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575");
MODULE_ALIAS("of:N*T*Cnxp,pcf8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8575");
MODULE_ALIAS("of:N*T*Cnxp,pca8575C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9671");
MODULE_ALIAS("of:N*T*Cnxp,pca9671C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9673");
MODULE_ALIAS("of:N*T*Cnxp,pca9673C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9675");
MODULE_ALIAS("of:N*T*Cnxp,pca9675C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7328");
MODULE_ALIAS("of:N*T*Cmaxim,max7328C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7329");
MODULE_ALIAS("of:N*T*Cmaxim,max7329C*");
MODULE_ALIAS("i2c:pcf8574");
MODULE_ALIAS("i2c:pcf8574a");
MODULE_ALIAS("i2c:pca8574");
MODULE_ALIAS("i2c:pca9670");
MODULE_ALIAS("i2c:pca9672");
MODULE_ALIAS("i2c:pca9674");
MODULE_ALIAS("i2c:pcf8575");
MODULE_ALIAS("i2c:pca8575");
MODULE_ALIAS("i2c:pca9671");
MODULE_ALIAS("i2c:pca9673");
MODULE_ALIAS("i2c:pca9675");
MODULE_ALIAS("i2c:max7328");
MODULE_ALIAS("i2c:max7329");
