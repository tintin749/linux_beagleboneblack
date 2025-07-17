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
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x314fab7f, "hid_validate_values" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x292a31e8, "__hid_request" },
	{ 0xf144f336, "input_event" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x71c90087, "memcmp" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x91452968, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");
MODULE_ALIAS("hid:b0003g*v000004B3p00003100");
MODULE_ALIAS("hid:b0003g*v000004B3p00003103");
MODULE_ALIAS("hid:b0003g*v000004B3p00003105");
MODULE_ALIAS("hid:b0003g*v000004B3p00003108");
MODULE_ALIAS("hid:b0003g*v000004B3p00003109");
MODULE_ALIAS("hid:b0003g*v000017EFp00006049");
MODULE_ALIAS("hid:b0003g*v000017EFp00006062");
