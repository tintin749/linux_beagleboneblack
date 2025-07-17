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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0x3459bf35, "llc_sap_open" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3e2dd29, "llc_sap_close" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xdd1effdb, "llc_build_and_send_ui_pkt" },
};

MODULE_INFO(depends, "llc");

