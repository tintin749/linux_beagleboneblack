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
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x18ac3292, "tcf_qevent_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf5bcef26, "tcf_qevent_validate_change" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9d669763, "memcpy" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x400d2f6, "qdisc_hash_add" },
	{ 0xee9c9587, "fifo_create_dflt" },
	{ 0xd005d458, "bfifo_qdisc_ops" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa0fd82ca, "qdisc_offload_graft_helper" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xcd06f7fa, "tcf_qevent_handle" },
	{ 0x3cd3dc62, "__qdisc_calculate_pkt_len" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x851a3d9d, "tcf_qevent_dump" },
	{ 0xf687108, "nla_put" },
	{ 0xfa8a8422, "qdisc_offload_dump_helper" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1b717a8d, "tcf_qevent_destroy" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

