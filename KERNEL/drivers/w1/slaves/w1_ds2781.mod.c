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
	{ 0x368ac8df, "w1_reset_select_slave" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x2673b447, "platform_device_add" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xae239781, "w1_write_block" },
	{ 0x7a0127d4, "w1_write_8" },
	{ 0xed423968, "w1_read_block" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa986e4d9, "w1_register_family" },
	{ 0xbe1b2621, "platform_device_put" },
	{ 0x48a0f781, "w1_unregister_family" },
};

MODULE_INFO(depends, "wire");

