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
	{ 0xbe4b8526, "devm_hwmon_device_register_with_groups" },
	{ 0x7410aba2, "strreplace" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x7884277a, "devm_iio_channel_get_all" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x854e45f3, "iio_get_channel_type" },
	{ 0x6369fc49, "iio_read_channel_processed" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ciio-hwmon");
MODULE_ALIAS("of:N*T*Ciio-hwmonC*");
