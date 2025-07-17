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
	{ 0x9697742b, "gnet_stats_copy_queue" },
	{ 0x4609563c, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xc3ec7dc1, "__gnet_stats_copy_basic" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x9454ba78, "netdev_set_tc_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xd5402b7e, "qdisc_create_dflt" },
	{ 0xeeb55c26, "default_qdisc_ops" },
	{ 0x54113f42, "pfifo_fast_ops" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd6244412, "dev_deactivate" },
	{ 0xac217995, "dev_activate" },
	{ 0x8b26cc50, "netdev_txq_to_tc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x71cc86d2, "netdev_set_num_tc" },
	{ 0x5f754e5a, "memset" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0xb6df2c9f, "dev_graft_qdisc" },
	{ 0x400d2f6, "qdisc_hash_add" },
	{ 0x668130e1, "qdisc_hash_del" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

