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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x77abe509, "cdev_del" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0xa38891a0, "iov_iter_npages" },
	{ 0xdfb957d8, "__skb_gso_segment" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa70fb761, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x2dc996e3, "__skb_flow_dissect" },
	{ 0x78581727, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x8df3e80b, "sock_alloc_send_pskb" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x2c2ddc9f, "skb_partial_csum_set" },
	{ 0x24f90132, "kfree_skb_list" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x951425dc, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9d785a61, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa346975c, "idr_remove" },
	{ 0x6f540883, "build_skb" },
	{ 0x83c50091, "cdev_add" },
	{ 0xba67d8a5, "dev_set_mac_address_user" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x24488c8f, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc7842a6e, "dev_get_mac_address" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xa3681163, "iov_iter_advance" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0x49970de8, "finish_wait" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x4fad61, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x47925794, "idr_find" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x884608ef, "zerocopy_sg_from_iter" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");

