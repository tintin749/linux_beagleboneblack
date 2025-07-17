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
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x1a3a3c63, "devm_i2c_new_dummy_device" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xb9fac3a0, "i2c_smbus_read_byte" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max7319");
MODULE_ALIAS("of:N*T*Cmaxim,max7319C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7320");
MODULE_ALIAS("of:N*T*Cmaxim,max7320C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7321");
MODULE_ALIAS("of:N*T*Cmaxim,max7321C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7322");
MODULE_ALIAS("of:N*T*Cmaxim,max7322C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7323");
MODULE_ALIAS("of:N*T*Cmaxim,max7323C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7324");
MODULE_ALIAS("of:N*T*Cmaxim,max7324C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7325");
MODULE_ALIAS("of:N*T*Cmaxim,max7325C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7326");
MODULE_ALIAS("of:N*T*Cmaxim,max7326C*");
MODULE_ALIAS("of:N*T*Cmaxim,max7327");
MODULE_ALIAS("of:N*T*Cmaxim,max7327C*");
MODULE_ALIAS("i2c:max7319");
MODULE_ALIAS("i2c:max7320");
MODULE_ALIAS("i2c:max7321");
MODULE_ALIAS("i2c:max7322");
MODULE_ALIAS("i2c:max7323");
MODULE_ALIAS("i2c:max7324");
MODULE_ALIAS("i2c:max7325");
MODULE_ALIAS("i2c:max7326");
MODULE_ALIAS("i2c:max7327");
