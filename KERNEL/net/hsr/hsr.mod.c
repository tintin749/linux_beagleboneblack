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
	{ 0x3474aaa4, "dev_mc_sync_multiple" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0x96b09dd, "dev_mc_unsync" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x83d2a225, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd714f4ee, "dev_disable_lro" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x29762e0c, "single_release" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x91f3864f, "netdev_rx_handler_register" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x44fb722, "dev_base_lock" },
	{ 0x692620e0, "dev_set_allmulti" },
	{ 0xe6259eb1, "vlan_vid_del" },
	{ 0xc99025b0, "call_netdevice_notifiers" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x87b5d9b3, "vlan_vid_add" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x2fa6809e, "debugfs_rename" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xda893db2, "PDE_DATA" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa5122a9e, "proc_mkdir" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf687108, "nla_put" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x94519b74, "netdev_printk" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb4aec65, "init_net" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfb73c08f, "eth_header_parse" },
	{ 0x6672caa9, "netdev_rx_handler_unregister" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x407053e8, "netdev_upper_dev_link" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x3eccc05, "dev_uc_unsync" },
	{ 0xb8d7022d, "__pskb_copy_fclone" },
	{ 0xa77436b6, "netdev_state_change" },
	{ 0xc00cd5b6, "netlink_ack" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2a7d81, "proc_create_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0xe9fd1013, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x8106e467, "dev_uc_sync_multiple" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x99bb8806, "memmove" },
	{ 0x5b22c29f, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x738c0b10, "skb_put" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xfa87021b, "eth_header" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xdb72fa66, "__skb_pad" },
	{ 0xceb33e72, "dev_set_mtu" },
};

MODULE_INFO(depends, "");

