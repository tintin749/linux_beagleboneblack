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
	{ 0x5f711fcb, "param_ops_string" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xc5fc1691, "configfs_unregister_subsystem" },
	{ 0xb2bbdd80, "unregister_console" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd3d9d408, "configfs_register_subsystem" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xed901701, "config_group_init" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc650fb5f, "netpoll_parse_options" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9e577ddd, "config_item_init_type_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0xdd27fa87, "memchr" },
	{ 0x69332ea7, "netpoll_send_udp" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x1a39a4cd, "register_console" },
	{ 0x3bcc205d, "netpoll_cleanup" },
	{ 0x4df32cd0, "netpoll_setup" },
	{ 0x1490af06, "netpoll_print_options" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1b6314fd, "in_aton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xa3131f6, "strnchr" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x652032cb, "mac_pton" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa0aa717e, "__netpoll_cleanup" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xb8c5e943, "config_item_put" },
	{ 0x9f2df15e, "config_item_get" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

