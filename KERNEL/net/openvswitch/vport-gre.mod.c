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
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x7200f9d9, "ovs_netdev_tunnel_destroy" },
	{ 0xd8e60d51, "ovs_vport_ops_unregister" },
	{ 0xab8de36b, "__ovs_vport_ops_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8b205f74, "ovs_vport_free" },
	{ 0x1d1f83fa, "rtnl_delete_link" },
	{ 0xcb17aa25, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xfe490f50, "dev_change_flags" },
	{ 0x78255b21, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1671f1e, "ovs_vport_alloc" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");

