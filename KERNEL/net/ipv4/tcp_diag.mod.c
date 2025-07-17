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
	{ 0x5aa64b34, "inet_diag_unregister" },
	{ 0x5ca5b84e, "inet_diag_register" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x49839f80, "nla_reserve" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x97255bdf, "strlen" },
	{ 0xf687108, "nla_put" },
	{ 0x81148018, "inet_diag_dump_icsk" },
	{ 0xbb80a784, "inet_diag_dump_one_icsk" },
	{ 0x886b98a4, "tcp_get_info" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5cca57cc, "sock_gen_put" },
	{ 0xfaa6c9c7, "sock_diag_destroy" },
	{ 0x23b317ca, "inet_diag_find_one_icsk" },
	{ 0x58d4952b, "tcp_hashinfo" },
};

MODULE_INFO(depends, "inet_diag");

