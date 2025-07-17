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
	{ 0x65ac725f, "register_qdisc" },
	{ 0xd757267c, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x400d2f6, "qdisc_hash_add" },
	{ 0xee9c9587, "fifo_create_dflt" },
	{ 0xd005d458, "bfifo_qdisc_ops" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xa0d87339, "qdisc_get_rtab" },
	{ 0xcd18ee9a, "fifo_set_limit" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x87d440ef, "qdisc_watchdog_schedule_range_ns" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xf687108, "nla_put" },
	{ 0xfa8a8422, "qdisc_offload_dump_helper" },
	{ 0x4fad61, "consume_skb" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0x3cd3dc62, "__qdisc_calculate_pkt_len" },
	{ 0xdfb957d8, "__skb_gso_segment" },
	{ 0x14a3db31, "netif_skb_features" },
	{ 0x5f6d2de5, "skb_gso_validate_mac_len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0x67bdadb, "qdisc_watchdog_cancel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

