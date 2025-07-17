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
	{ 0x2b5a3bf0, "hmc5843_common_resume" },
	{ 0x1f75160c, "hmc5843_common_suspend" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x5b91ac64, "hmc5843_common_probe" },
	{ 0x5550d903, "__devm_regmap_init_i2c" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x972ff135, "hmc5843_common_remove" },
};

MODULE_INFO(depends, "hmc5843_core");

MODULE_ALIAS("of:N*T*Choneywell,hmc5843");
MODULE_ALIAS("of:N*T*Choneywell,hmc5843C*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883C*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883l");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883lC*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983C*");
MODULE_ALIAS("i2c:hmc5843");
MODULE_ALIAS("i2c:hmc5883");
MODULE_ALIAS("i2c:hmc5883l");
MODULE_ALIAS("i2c:hmc5983");
