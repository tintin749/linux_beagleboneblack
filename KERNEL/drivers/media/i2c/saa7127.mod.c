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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xeea0399, "strscpy" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x268645c, "v4l2_device_unregister_subdev" },
	{ 0x5f754e5a, "memset" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:saa7127_auto");
MODULE_ALIAS("i2c:saa7126");
MODULE_ALIAS("i2c:saa7127");
MODULE_ALIAS("i2c:saa7128");
MODULE_ALIAS("i2c:saa7129");
