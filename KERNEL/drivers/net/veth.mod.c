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
	{ 0x496aab02, "ethtool_op_get_ts_info" },
	{ 0x4a2af6b1, "ethtool_op_get_link" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x926142b5, "passthru_features_check" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x20835a9f, "__xdp_release_frame" },
	{ 0xb9681621, "xdp_do_flush" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x3bc45e6a, "__traceiter_xdp_exception" },
	{ 0xd653b126, "sched_clock" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x4fad61, "consume_skb" },
	{ 0xc97e9a5b, "skb_headers_offset_update" },
	{ 0x104b09c7, "skb_copy_header" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x43145f74, "page_address" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xabc1c505, "napi_gro_receive" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6f540883, "build_skb" },
	{ 0xfffca83e, "xdp_do_redirect" },
	{ 0x8c1eec49, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x6f8f674a, "bpf_dispatcher_xdp_func" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0x90d03f5, "bpf_redirect_info" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xca3a2170, "skb_tstamp_tx" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xd57da7e6, "__dev_forward_skb" },
	{ 0x208ac5ce, "skb_clone_tx_timestamp" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x73e5201a, "__put_net" },
	{ 0xef62963f, "rtnl_configure_link" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0x19aa2d34, "rtnl_create_link" },
	{ 0x56ffa48a, "rtnl_link_get_net" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x84c03e9a, "rtnl_nla_parse_ifla" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x5b22c29f, "netdev_update_features" },
	{ 0xf07cb710, "bpf_prog_put" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x29fc7f52, "xdp_rxq_info_reg" },
	{ 0x40191046, "xdp_rxq_info_reg_mem_model" },
	{ 0x1fb5f165, "xdp_rxq_info_is_reg" },
	{ 0xbb7195a5, "xdp_warn" },
	{ 0x8bdb466f, "xdp_convert_zc_to_xdp_frame" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xaeb3f427, "__traceiter_xdp_bulk_tx" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x4ac02be0, "__tracepoint_xdp_bulk_tx" },
	{ 0x8a8bccad, "__napi_schedule" },
	{ 0x6acbbe17, "napi_schedule_prep" },
	{ 0x79ec657e, "xdp_return_frame_rx_napi" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xb767d8f9, "xdp_rxq_info_unreg" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xb298e641, "__netif_napi_del" },
	{ 0x70351a34, "napi_disable" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x70e848ee, "dev_lstats_read" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb5a25f65, "xdp_return_frame" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

