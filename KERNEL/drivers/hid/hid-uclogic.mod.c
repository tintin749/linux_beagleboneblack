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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x97255bdf, "strlen" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf144f336, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x45158076, "usb_string" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x84b183ae, "strncmp" },
	{ 0x6ad34cf0, "usb_hid_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00005543p00000042");
MODULE_ALIAS("hid:b0003g*v00005543p00000003");
MODULE_ALIAS("hid:b0003g*v00005543p00000004");
MODULE_ALIAS("hid:b0003g*v00005543p00000005");
MODULE_ALIAS("hid:b0003g*v00005543p00000064");
MODULE_ALIAS("hid:b0003g*v00005543p00000522");
MODULE_ALIAS("hid:b0003g*v00005543p00000781");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006E");
MODULE_ALIAS("hid:b0003g*v0000256Cp0000006D");
MODULE_ALIAS("hid:b0003g*v00005543p0000006E");
MODULE_ALIAS("hid:b0003g*v00005543p0000004D");
MODULE_ALIAS("hid:b0003g*v00005543p00000081");
MODULE_ALIAS("hid:b0003g*v00005543p00000045");
MODULE_ALIAS("hid:b0003g*v00005543p00000047");
MODULE_ALIAS("hid:b0003g*v00005543p00003031");
MODULE_ALIAS("hid:b0003g*v00002179p00000053");
MODULE_ALIAS("hid:b0003g*v00002179p00000077");
MODULE_ALIAS("hid:b0003g*v000028BDp00000074");
MODULE_ALIAS("hid:b0003g*v000028BDp00000071");
MODULE_ALIAS("hid:b0003g*v000028BDp00000055");
MODULE_ALIAS("hid:b0003g*v000028BDp00000075");
MODULE_ALIAS("hid:b0003g*v000028BDp00000094");
MODULE_ALIAS("hid:b0003g*v000028BDp00000042");
