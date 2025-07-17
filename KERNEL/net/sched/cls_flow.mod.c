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
	{ 0x16434bcc, "unregister_tcf_proto_ops" },
	{ 0x6061b170, "register_tcf_proto_ops" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0x2dc996e3, "__skb_flow_dissect" },
	{ 0xc9831ad7, "flow_keys_dissector" },
	{ 0x5f754e5a, "memset" },
	{ 0xe10b817f, "__tcf_em_tree_match" },
	{ 0x8733a550, "from_kuid" },
	{ 0x93eea9e4, "from_kgid" },
	{ 0x6514c1e6, "flow_get_u32_src" },
	{ 0x187ca862, "tcf_action_exec" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x5a99a0d7, "flow_get_u32_dst" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x73e5201a, "__put_net" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d5d6cfc, "tcf_em_tree_destroy" },
	{ 0xa73b94f6, "tcf_exts_destroy" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xb9b25f1f, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4665ce25, "tcf_exts_validate" },
	{ 0x8869317, "tcf_em_tree_validate" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xd23a77d4, "tcf_exts_dump_stats" },
	{ 0x43a91dcb, "tcf_em_tree_dump" },
	{ 0x37cf7a09, "tcf_exts_dump" },
	{ 0xf687108, "nla_put" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

