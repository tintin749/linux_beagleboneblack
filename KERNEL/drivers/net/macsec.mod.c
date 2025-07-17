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
	{ 0xa84b5654, "register_netdevice" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xbf7e42b0, "skb_to_sgvec" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0x96b09dd, "dev_mc_unsync" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x511c0cd8, "dev_uc_add" },
	{ 0x91f3864f, "netdev_rx_handler_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0xa60266c3, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x692620e0, "dev_set_allmulti" },
	{ 0x96346e26, "linkwatch_fire_event" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xdb5ad398, "skb_cow_data" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xf687108, "nla_put" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x76bc441e, "gro_cells_receive" },
	{ 0x71749ce5, "netif_stacked_transfer_operstate" },
	{ 0x5481ae70, "crypto_aead_encrypt" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5ad8da8d, "crypto_aead_setkey" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6672caa9, "netdev_rx_handler_unregister" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x16cc526e, "dev_fetch_sw_netstats" },
	{ 0x407053e8, "netdev_upper_dev_link" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x3eccc05, "dev_uc_unsync" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xace04862, "crypto_aead_decrypt" },
	{ 0xddb49b5c, "crypto_aead_setauthsize" },
	{ 0x8b466618, "gro_cells_init" },
	{ 0x2cd74a1c, "crypto_alloc_aead" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe9fd1013, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb266e265, "___pskb_trim" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x4bd5a339, "dev_uc_del" },
	{ 0x1d344320, "dev_uc_sync" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x4fad61, "consume_skb" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x738c0b10, "skb_put" },
	{ 0x7e681fb1, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xceb33e72, "dev_set_mtu" },
};

MODULE_INFO(depends, "");

