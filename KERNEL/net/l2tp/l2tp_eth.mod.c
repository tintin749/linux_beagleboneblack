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
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc5850110, "printk" },
	{ 0x10ce5f3e, "l2tp_nl_register_ops" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x42fa7c1d, "__skb_ext_del" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x89ea2af0, "dev_forward_skb" },
	{ 0xa84e6e88, "l2tp_xmit_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc7530e4f, "l2tp_session_delete" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0xac0af05c, "dst_release" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xc6764eec, "l2tp_session_dec_refcount" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0xddd568ea, "l2tp_session_register" },
	{ 0xd4bea78b, "l2tp_session_inc_refcount" },
	{ 0x81fed507, "release_sock" },
	{ 0x252de882, "kernel_sock_ip_overhead" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xdf61f2d8, "l2tp_session_create" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0xe864a95a, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "0A1F67DCE4201271045C901");
