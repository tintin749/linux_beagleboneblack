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
	{ 0x24488c8f, "skb_checksum_help" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xa60266c3, "skb_copy" },
	{ 0x4fad61, "consume_skb" },
	{ 0xdfb957d8, "__skb_gso_segment" },
	{ 0x14a3db31, "netif_skb_features" },
	{ 0x75a38389, "skb_clone" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x8fbb6721, "skb_orphan_partial" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x87d440ef, "qdisc_watchdog_schedule_range_ns" },
	{ 0x24f90132, "kfree_skb_list" },
	{ 0x3cd3dc62, "__qdisc_calculate_pkt_len" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd757267c, "qdisc_watchdog_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5f754e5a, "memset" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0x67bdadb, "qdisc_watchdog_cancel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

