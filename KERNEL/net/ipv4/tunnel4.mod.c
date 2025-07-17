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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdea41ba9, "inet_del_protocol" },
	{ 0xf0d913c7, "__icmp_send" },
	{ 0x2123ae8, "xfrm_input_register_afinfo" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf9fc78f9, "inet_add_protocol" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xce6b58bd, "xfrm_input_unregister_afinfo" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "");

