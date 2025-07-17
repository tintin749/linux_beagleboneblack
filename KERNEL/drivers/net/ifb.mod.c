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
	{ 0x753cac7, "eth_validate_addr" },
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
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x40193871, "netif_receive_skb" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfa469103, "dev_get_by_index_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x669f8c58, "netif_tx_stop_all_queues" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4fad61, "consume_skb" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

