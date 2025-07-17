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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xef5544c3, "snd_virmidi_new" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf8252269, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd,snd-seq-virmidi");

