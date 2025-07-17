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
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:abp060mg");
MODULE_ALIAS("i2c:abp006kg");
MODULE_ALIAS("i2c:abp100mg");
MODULE_ALIAS("i2c:abp010kg");
MODULE_ALIAS("i2c:abp160mg");
MODULE_ALIAS("i2c:abp016kg");
MODULE_ALIAS("i2c:abp250mg");
MODULE_ALIAS("i2c:abp025kg");
MODULE_ALIAS("i2c:abp400mg");
MODULE_ALIAS("i2c:abp040kg");
MODULE_ALIAS("i2c:abp600mg");
MODULE_ALIAS("i2c:abp060kg");
MODULE_ALIAS("i2c:abp001bg");
MODULE_ALIAS("i2c:abp100kg");
MODULE_ALIAS("i2c:abp1_6bg");
MODULE_ALIAS("i2c:abp160kg");
MODULE_ALIAS("i2c:abp2_5bg");
MODULE_ALIAS("i2c:abp250kg");
MODULE_ALIAS("i2c:abp004bg");
MODULE_ALIAS("i2c:abp400kg");
MODULE_ALIAS("i2c:abp006bg");
MODULE_ALIAS("i2c:abp600kg");
MODULE_ALIAS("i2c:abp010bg");
MODULE_ALIAS("i2c:abp001gg");
MODULE_ALIAS("i2c:abp060md");
MODULE_ALIAS("i2c:abp006kd");
MODULE_ALIAS("i2c:abp100md");
MODULE_ALIAS("i2c:abp010kd");
MODULE_ALIAS("i2c:abp160md");
MODULE_ALIAS("i2c:abp016kd");
MODULE_ALIAS("i2c:abp250md");
MODULE_ALIAS("i2c:abp025kd");
MODULE_ALIAS("i2c:abp400md");
MODULE_ALIAS("i2c:abp040kd");
MODULE_ALIAS("i2c:abp600md");
MODULE_ALIAS("i2c:abp060kd");
MODULE_ALIAS("i2c:abp001bd");
MODULE_ALIAS("i2c:abp100kd");
MODULE_ALIAS("i2c:abp1_6bd");
MODULE_ALIAS("i2c:abp160kd");
MODULE_ALIAS("i2c:abp2_5bd");
MODULE_ALIAS("i2c:abp250kd");
MODULE_ALIAS("i2c:abp004bd");
MODULE_ALIAS("i2c:abp400kd");
MODULE_ALIAS("i2c:abp001pg");
MODULE_ALIAS("i2c:abp005pg");
MODULE_ALIAS("i2c:abp015pg");
MODULE_ALIAS("i2c:abp030pg");
MODULE_ALIAS("i2c:abp060pg");
MODULE_ALIAS("i2c:abp100pg");
MODULE_ALIAS("i2c:abp150pg");
MODULE_ALIAS("i2c:abp001pd");
MODULE_ALIAS("i2c:abp005pd");
MODULE_ALIAS("i2c:abp015pd");
MODULE_ALIAS("i2c:abp030pd");
MODULE_ALIAS("i2c:abp060pd");
