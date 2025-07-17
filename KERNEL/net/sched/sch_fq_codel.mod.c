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
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x65080188, "tcf_block_get" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xf687108, "nla_put" },
	{ 0xcf8cbddc, "gnet_stats_copy_app" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5f754e5a, "memset" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xddc532b3, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcefdd7b8, "tcf_classify" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1aba9ae5, "tcf_block_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

