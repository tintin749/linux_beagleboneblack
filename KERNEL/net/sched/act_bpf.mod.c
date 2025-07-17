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
	{ 0xf454a082, "tcf_unregister_action" },
	{ 0xfe7131b4, "tcf_register_action" },
	{ 0x9efffd39, "bpf_prog_destroy" },
	{ 0xf07cb710, "bpf_prog_put" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2716065f, "tcf_action_set_ctrlact" },
	{ 0x717b120c, "bpf_prog_create" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x17d67390, "bpf_prog_get_type_dev" },
	{ 0xd9d998ca, "tcf_idr_cleanup" },
	{ 0x701ffd8f, "tcf_idr_create" },
	{ 0xde655d5d, "tcf_idr_release" },
	{ 0xb3113b88, "tcf_chain_put_by_act" },
	{ 0xf33edf4c, "tcf_action_check_ctrlact" },
	{ 0xb05c583c, "tcf_idr_check_alloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x97255bdf, "strlen" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x9d669763, "memcpy" },
	{ 0x49839f80, "nla_reserve" },
	{ 0xf687108, "nla_put" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd653b126, "sched_clock" },
	{ 0x8091f5d3, "sock_pfree" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x33490561, "tcf_idr_search" },
	{ 0x8998b88d, "tcf_generic_walker" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xcee57379, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
};

MODULE_INFO(depends, "");

