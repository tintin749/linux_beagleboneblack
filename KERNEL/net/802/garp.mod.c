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
	{ 0xb8e22f07, "stp_proto_unregister" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd677f356, "dev_mc_add" },
	{ 0xece784c2, "rb_first" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6f28d22e, "stp_proto_register" },
	{ 0x71c90087, "memcmp" },
	{ 0xc74ecf7e, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xccbe5cb7, "dev_mc_del" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xca9360b5, "rb_next" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x15f5c1f6, "param_ops_uint" },
};

MODULE_INFO(depends, "stp,llc");

