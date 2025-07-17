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
	{ 0x6fbe4717, "idr_replace" },
	{ 0xb9b25f1f, "tcf_block_netif_keep_dst" },
	{ 0x17d67390, "bpf_prog_get_type_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x717b120c, "bpf_prog_create" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4665ce25, "tcf_exts_validate" },
	{ 0x3ec40239, "idr_alloc_u32" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xc5850110, "printk" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa346975c, "idr_remove" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x73e5201a, "__put_net" },
	{ 0xf07cb710, "bpf_prog_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x9efffd39, "bpf_prog_destroy" },
	{ 0xa73b94f6, "tcf_exts_destroy" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x97255bdf, "strlen" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xd23a77d4, "tcf_exts_dump_stats" },
	{ 0x37cf7a09, "tcf_exts_dump" },
	{ 0x9d669763, "memcpy" },
	{ 0x49839f80, "nla_reserve" },
	{ 0xf687108, "nla_put" },
	{ 0x69fa1cb3, "tc_setup_cb_call" },
	{ 0xc3969d14, "tc_setup_cb_reoffload" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd653b126, "sched_clock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x187ca862, "tcf_action_exec" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x26c83ff8, "tc_setup_cb_destroy" },
	{ 0x555d8d51, "tc_setup_cb_replace" },
	{ 0xf661d566, "tc_setup_cb_add" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

