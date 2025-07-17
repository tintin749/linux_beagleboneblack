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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0x7e631a69, "sock_bindtoindex" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x761d04d1, "sock_release" },
	{ 0x6c572162, "metadata_dst_alloc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc99025b0, "call_netdevice_notifiers" },
	{ 0x1a715715, "sock_create_kern" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d1c7697, "kernel_connect" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf687108, "nla_put" },
	{ 0xb6fc2f80, "iptunnel_xmit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x928b7bd8, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x82a9ee57, "ipv6_stub" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xa0ae123f, "udp_tunnel_nic_ops" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xb30c5766, "udp_set_csum" },
	{ 0x5736af75, "kernel_bind" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "");

