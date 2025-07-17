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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x89ea2af0, "dev_forward_skb" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x96b09dd, "dev_mc_unsync" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x511c0cd8, "dev_uc_add" },
	{ 0xd57da7e6, "__dev_forward_skb" },
	{ 0x82f8575d, "dev_mc_add_excl" },
	{ 0x91f3864f, "netdev_rx_handler_register" },
	{ 0x626b7512, "dev_uc_add_excl" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x692620e0, "dev_set_allmulti" },
	{ 0xe6259eb1, "vlan_vid_del" },
	{ 0xc99025b0, "call_netdevice_notifiers" },
	{ 0x96346e26, "linkwatch_fire_event" },
	{ 0x87b5d9b3, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xc369bf06, "__netpoll_setup" },
	{ 0xeea0399, "strscpy" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0xf9d1bc72, "dev_set_mac_address" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x99e5eebc, "ip_check_defrag" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc47a8eaf, "__ethtool_get_link_ksettings" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xccbe5cb7, "dev_mc_del" },
	{ 0xf687108, "nla_put" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0x419688d1, "ndo_dflt_fdb_dump" },
	{ 0x71749ce5, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb4aec65, "init_net" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x8793a3b3, "eth_header_cache_update" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6672caa9, "netdev_rx_handler_unregister" },
	{ 0xfb73c08f, "eth_header_parse" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x926142b5, "passthru_features_check" },
	{ 0x407053e8, "netdev_upper_dev_link" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x3eccc05, "dev_uc_unsync" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xe9fd1013, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0xe44fcab2, "dev_change_proto_down_generic" },
	{ 0x9d669763, "memcpy" },
	{ 0xa8a9f323, "eth_header_cache" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xbca3414a, "netpoll_send_skb" },
	{ 0x4bd5a339, "dev_uc_del" },
	{ 0x1d344320, "dev_uc_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x69f25fc1, "__netpoll_free" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4fad61, "consume_skb" },
	{ 0x5b22c29f, "netdev_update_features" },
	{ 0xfaae78ff, "dev_queue_xmit_accel" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x9e6a1dd2, "netdev_is_rx_handler_busy" },
	{ 0x7e681fb1, "dev_mc_sync" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xceb33e72, "dev_set_mtu" },
};

MODULE_INFO(depends, "");

