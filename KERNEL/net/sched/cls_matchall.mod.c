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
	{ 0xf661d566, "tc_setup_cb_add" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4665ce25, "tcf_exts_validate" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x69fa1cb3, "tc_setup_cb_call" },
	{ 0xd23a77d4, "tcf_exts_dump_stats" },
	{ 0x37cf7a09, "tcf_exts_dump" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf687108, "nla_put" },
	{ 0x26c83ff8, "tc_setup_cb_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x73e5201a, "__put_net" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xa73b94f6, "tcf_exts_destroy" },
	{ 0x187ca862, "tcf_action_exec" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4806247a, "tc_cleanup_flow_action" },
	{ 0xc3969d14, "tc_setup_cb_reoffload" },
	{ 0x37a0cba, "kfree" },
	{ 0x46b048e4, "tc_setup_flow_action" },
	{ 0x96742735, "flow_rule_alloc" },
	{ 0x6a929da0, "tcf_exts_num_actions" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

