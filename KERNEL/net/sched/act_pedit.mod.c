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
	{ 0xee22163, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd4022ec3, "skb_store_bits" },
	{ 0xc5850110, "printk" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xff890c49, "skb_ensure_writable" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd9d998ca, "tcf_idr_cleanup" },
	{ 0xde655d5d, "tcf_idr_release" },
	{ 0x701ffd8f, "tcf_idr_create" },
	{ 0xb3113b88, "tcf_chain_put_by_act" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x2716065f, "tcf_action_set_ctrlact" },
	{ 0x9d669763, "memcpy" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xf33edf4c, "tcf_action_check_ctrlact" },
	{ 0xb05c583c, "tcf_idr_check_alloc" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x33490561, "tcf_idr_search" },
	{ 0x8998b88d, "tcf_generic_walker" },
	{ 0x7350189d, "tcf_action_update_stats" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xcee57379, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");

