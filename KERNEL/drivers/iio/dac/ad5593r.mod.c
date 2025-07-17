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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x8b327a17, "ad5592r_probe" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3293d46b, "ad5592r_remove" },
};

MODULE_INFO(depends, "ad5592r-base");

MODULE_ALIAS("acpi*:ADS5593:*");
MODULE_ALIAS("of:N*T*Cadi,ad5593r");
MODULE_ALIAS("of:N*T*Cadi,ad5593rC*");
MODULE_ALIAS("i2c:ad5593r");
