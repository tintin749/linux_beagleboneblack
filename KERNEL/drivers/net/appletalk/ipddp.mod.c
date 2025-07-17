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
	{ 0xa5641881, "eth_mac_addr" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xc5850110, "printk" },
	{ 0x8e620df3, "alloc_etherdev_mqs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xa446764b, "atrtr_get_dev" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd1b873af, "aarp_send_ddp" },
	{ 0x49e2ef91, "atalk_find_dev_addr" },
	{ 0xae577d60, "_raw_spin_lock" },
};

MODULE_INFO(depends, "appletalk");

