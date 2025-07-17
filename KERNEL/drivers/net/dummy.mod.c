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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x496aab02, "ethtool_op_get_ts_info" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xf36b0b1f, "__rtnl_link_unregister" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x47506cb1, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4253aa7e, "down_write" },
	{ 0x21726652, "pernet_ops_rwsem" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xca3a2170, "skb_tstamp_tx" },
	{ 0x4fad61, "consume_skb" },
	{ 0x208ac5ce, "skb_clone_tx_timestamp" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x70e848ee, "dev_lstats_read" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

