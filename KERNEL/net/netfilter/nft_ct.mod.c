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
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x68b41d14, "nft_unregister_obj" },
	{ 0xfc074f8f, "nft_register_obj" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0x9d669763, "memcpy" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0x328a05f1, "strncpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x399cf715, "nf_ct_get_id" },
	{ 0xe95c9f92, "nf_connlabels_replace" },
	{ 0xed53ab4, "nf_ct_expect_related_report" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd40d1b3d, "nf_ct_expect_init" },
	{ 0xe7ba70e0, "nf_ct_expect_alloc" },
	{ 0xb4aec65, "init_net" },
	{ 0x37c1a199, "nf_connlabels_get" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x6a571da1, "nf_connlabels_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x272732ba, "nf_ct_tmpl_alloc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x734e2dc, "nf_ct_l4proto_find" },
	{ 0x97255bdf, "strlen" },
	{ 0xb08783e0, "__nf_ct_refresh_acct" },
	{ 0x7db9cc1d, "nf_ct_ext_add" },
	{ 0xa2a73942, "nft_parse_register_store" },
	{ 0x5483f3db, "nft_dump_register" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf4271b43, "nf_ct_helper_ext_add" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65572c34, "nf_conntrack_helper_try_module_get" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x90f597ee, "nf_conntrack_helper_put" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c83ca0d, "nf_ct_untimeout" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf687108, "nla_put" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");

