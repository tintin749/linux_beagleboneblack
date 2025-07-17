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
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x4fad61, "consume_skb" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd5402b7e, "qdisc_create_dflt" },
	{ 0xb182cfa5, "pfifo_qdisc_ops" },
	{ 0x65080188, "tcf_block_get" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa1559d94, "sockfd_lookup" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9697742b, "gnet_stats_copy_queue" },
	{ 0x4609563c, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3cd3dc62, "__qdisc_calculate_pkt_len" },
	{ 0xcefdd7b8, "tcf_classify" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0xc5850110, "printk" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0x7bcf8005, "fput" },
	{ 0x1aba9ae5, "tcf_block_put" },
	{ 0x2a6f5bc, "qdisc_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

