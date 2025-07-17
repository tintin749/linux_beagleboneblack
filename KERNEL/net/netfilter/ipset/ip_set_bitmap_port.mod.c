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
	{ 0xe056f6de, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x8908957c, "ip_set_type_register" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xa4b6ed12, "ip_set_put_extensions" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x67e255e6, "ip_set_put_flags" },
	{ 0xf687108, "nla_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfe924066, "ip_set_extensions" },
	{ 0x6ab4def9, "ip_set_init_comment" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x397f6231, "ip_set_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x6344eaf6, "ip_set_alloc" },
	{ 0x9ae6e03b, "ip_set_elem_len" },
	{ 0xaf3600fb, "ip_set_get_ip4_port" },
	{ 0x931b313f, "ip_set_get_ip6_port" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x73b3fe1a, "ip_set_get_extensions" },
	{ 0x5f754e5a, "memset" },
	{ 0xeb19bb59, "ip_set_match_extensions" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ip_set");

