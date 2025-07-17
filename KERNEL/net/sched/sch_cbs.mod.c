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
	{ 0x4c7040af, "unregister_qdisc" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x65ac725f, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xd757267c, "qdisc_watchdog_init" },
	{ 0x400d2f6, "qdisc_hash_add" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd5402b7e, "qdisc_create_dflt" },
	{ 0xb182cfa5, "pfifo_qdisc_ops" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x67bdadb, "qdisc_watchdog_cancel" },
	{ 0x87d440ef, "qdisc_watchdog_schedule_range_ns" },
	{ 0x1eb64646, "div64_s64" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5850110, "printk" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0xc47a8eaf, "__ethtool_get_link_ksettings" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

