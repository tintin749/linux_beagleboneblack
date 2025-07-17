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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x8f217990, "xt_unregister_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5a2b5e0b, "xt_register_targets" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xfc07c74, "static_key_slow_inc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x405d470c, "dev_get_by_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x71c90087, "memcmp" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5daffb0f, "nf_dup_ipv4" },
	{ 0x182e681b, "static_key_slow_dec" },
	{ 0xd2b30083, "xt_tee_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4726bbc, "nf_dup_ipv6" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
};

MODULE_INFO(depends, "nf_dup_ipv4,nf_dup_ipv6");

