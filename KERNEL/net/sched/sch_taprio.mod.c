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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xac217995, "dev_activate" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0xaa152108, "hrtimer_active" },
	{ 0x3cd3dc62, "__qdisc_calculate_pkt_len" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x71cc86d2, "netdev_set_num_tc" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x65ac725f, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x2fcf18f7, "netdev_reset_tc" },
	{ 0x1eb64646, "div64_s64" },
	{ 0x4609563c, "gnet_stats_copy_basic" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xb182cfa5, "pfifo_qdisc_ops" },
	{ 0x9454ba78, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x400d2f6, "qdisc_hash_add" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc47a8eaf, "__ethtool_get_link_ksettings" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf687108, "nla_put" },
	{ 0xd5402b7e, "qdisc_create_dflt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4c7040af, "unregister_qdisc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xd6244412, "dev_deactivate" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x37b2b4f6, "__netif_schedule" },
	{ 0x9697742b, "gnet_stats_copy_queue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4f792a3, "skb_copy_bits" },
};

MODULE_INFO(depends, "");

