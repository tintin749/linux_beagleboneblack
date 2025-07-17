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
	{ 0xefc6b040, "mrp_uninit_applicant" },
	{ 0xfe490f50, "dev_change_flags" },
	{ 0xc0b5834e, "vlan_filter_push_vids" },
	{ 0x96b09dd, "dev_mc_unsync" },
	{ 0x1cb3c813, "mrp_request_leave" },
	{ 0x82eb924e, "vlan_filter_drop_vids" },
	{ 0x9b1bb81c, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x2794a4ae, "proc_create_single_data" },
	{ 0xd671ad42, "garp_uninit_applicant" },
	{ 0x5ca10fff, "vlan_dev_vlan_id" },
	{ 0x511c0cd8, "dev_uc_add" },
	{ 0x682d5afa, "_proc_mkdir" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x934adeaa, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x91c8b1c5, "vlan_uses_dev" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x692620e0, "dev_set_allmulti" },
	{ 0xe6259eb1, "vlan_vid_del" },
	{ 0xc99025b0, "call_netdevice_notifiers" },
	{ 0x96346e26, "linkwatch_fire_event" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x87b5d9b3, "vlan_vid_add" },
	{ 0xc369bf06, "__netpoll_setup" },
	{ 0xfd1e07a3, "garp_init_applicant" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1f1d5b41, "proc_remove" },
	{ 0x46330235, "vlan_ioctl_set" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc47a8eaf, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2820969, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x6ea7ce77, "garp_register_application" },
	{ 0xf687108, "nla_put" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x71749ce5, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb4aec65, "init_net" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc0d5d08f, "garp_request_leave" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfb73c08f, "eth_header_parse" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x4c3be774, "mrp_init_applicant" },
	{ 0x407053e8, "netdev_upper_dev_link" },
	{ 0x9aa4003b, "proc_create_net_data" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x3eccc05, "dev_uc_unsync" },
	{ 0xd216a0aa, "__dev_get_by_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8ed02212, "garp_unregister_application" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe9fd1013, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe4484124, "mrp_register_application" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xbca3414a, "netpoll_send_skb" },
	{ 0x4bd5a339, "dev_uc_del" },
	{ 0x1d344320, "dev_uc_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x69f25fc1, "__netpoll_free" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x5b22c29f, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xd3fccd0e, "mrp_unregister_application" },
	{ 0xa39d5226, "mrp_request_join" },
	{ 0x7e681fb1, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x128ab151, "dev_get_stats" },
	{ 0xceb33e72, "dev_set_mtu" },
};

MODULE_INFO(depends, "mrp,garp");


MODULE_INFO(srcversion, "D912A7A81F44BD14E408390");
