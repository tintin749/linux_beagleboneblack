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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0xaf6a82ea, "n_tty_inherit_ops" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3ac1b018, "pps_event" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x3363b534, "pps_register_source" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xdd75df6c, "pps_unregister_source" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x4eaa839e, "pps_lookup_dev" },
};

MODULE_INFO(depends, "");

