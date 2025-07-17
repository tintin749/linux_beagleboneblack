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
	{ 0x752d9c2, "sock_diag_put_meminfo" },
	{ 0xbd4afe0d, "from_kuid_munged" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x713edf85, "sock_diag_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3f4501e3, "sock_diag_put_filterinfo" },
	{ 0xe5259d4a, "sock_i_ino" },
	{ 0xe4954950, "fanout_mutex" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xdfb32db6, "sock_diag_register" },
	{ 0xf687108, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1a0d8be9, "nla_reserve_nohdr" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x318031b6, "sock_diag_save_cookie" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x500fe26a, "sock_i_uid" },
	{ 0xec861f3f, "__netlink_dump_start" },
	{ 0x78d4403d, "netlink_net_capable" },
};

MODULE_INFO(depends, "");

