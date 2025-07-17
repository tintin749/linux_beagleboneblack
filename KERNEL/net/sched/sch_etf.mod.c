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
	{ 0x4c7040af, "unregister_qdisc" },
	{ 0x65ac725f, "register_qdisc" },
	{ 0x24f90132, "kfree_skb_list" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3683ef83, "rtnl_kfree_skbs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xfb652520, "qdisc_watchdog_init_clockid" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf687108, "nla_put" },
	{ 0x87d440ef, "qdisc_watchdog_schedule_range_ns" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x77cb0a33, "sock_queue_err_skb" },
	{ 0x75a38389, "skb_clone" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67bdadb, "qdisc_watchdog_cancel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

