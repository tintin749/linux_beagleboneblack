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
	{ 0xa693cdbe, "net_ns_type_operations" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa10535cd, "macvlan_link_register" },
	{ 0x9af0a766, "tap_destroy_cdev" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x929b994a, "__class_register" },
	{ 0x49e50e, "tap_create_cdev" },
	{ 0xba10cd04, "macvlan_common_newlink" },
	{ 0x91f3864f, "netdev_rx_handler_register" },
	{ 0xa64dd79a, "tap_handle_frame" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49dc6527, "sysfs_create_link" },
	{ 0x8781d48, "device_create" },
	{ 0x54e05be6, "tap_free_minor" },
	{ 0x98171fcf, "device_destroy" },
	{ 0xfa6d327e, "sysfs_remove_link" },
	{ 0x92c9bee4, "tap_queue_resize" },
	{ 0x2dabde65, "tap_get_minor" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x35af377f, "macvlan_common_setup" },
	{ 0x5b22c29f, "netdev_update_features" },
	{ 0xd28d14f0, "macvlan_dellink" },
	{ 0x41edbc24, "tap_del_queues" },
	{ 0x6672caa9, "netdev_rx_handler_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "macvlan,tap");

