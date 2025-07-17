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
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xcabecdf9, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x101c7c76, "xt_register_target" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x2a7d81, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0x71c90087, "memcmp" },
	{ 0x9d669763, "memcpy" },
	{ 0x301769fb, "seq_release" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2cae53e, "refcount_dec_and_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x405d470c, "dev_get_by_name" },
	{ 0xd677f356, "dev_mc_add" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xccbe5cb7, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa5122a9e, "proc_mkdir" },
	{ 0xaaded3f9, "nf_register_net_hook" },
	{ 0x8e51b266, "nf_unregister_net_hook" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1f1d5b41, "proc_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdce6b3b4, "seq_open" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xab6d656, "seq_putc" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xda893db2, "PDE_DATA" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "nf_conntrack");

