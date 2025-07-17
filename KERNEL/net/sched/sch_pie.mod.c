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
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x5e866d85, "prandom_bytes" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x65ac725f, "register_qdisc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0xf687108, "nla_put" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x4c7040af, "unregister_qdisc" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

