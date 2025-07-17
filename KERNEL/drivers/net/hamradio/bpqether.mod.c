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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x89082cfd, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5a9f6cf8, "dev_add_pack" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x190e7ae8, "dev_close" },
	{ 0x84b183ae, "strncmp" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5850110, "printk" },
	{ 0xefb4fd1a, "ax25_ip_xmit" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x4fad61, "consume_skb" },
	{ 0x75a38389, "skb_clone" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb4aec65, "init_net" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7b8dbe3c, "ax25_header_ops" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ax25");

