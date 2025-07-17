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
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xd4e2b04c, "devm_led_classdev_register_ext" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x56d84093, "power_supply_powers" },
	{ 0xdd9934c5, "devm_power_supply_register" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x6ad34cf0, "usb_hid_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xc058d310, "input_mt_sync_frame" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0x52bb0701, "power_supply_changed" },
	{ 0xf144f336, "input_event" },
	{ 0x9d669763, "memcpy" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x99bb8806, "memmove" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x91452968, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0018g*v00000B05p00008585");
MODULE_ALIAS("hid:b0018g*v00000B05p00000101");
MODULE_ALIAS("hid:b0003g*v00000B05p00001854");
MODULE_ALIAS("hid:b0003g*v00000B05p00001837");
MODULE_ALIAS("hid:b0003g*v00000B05p00001822");
MODULE_ALIAS("hid:b0003g*v00000B05p00001869");
MODULE_ALIAS("hid:b0003g*v00000B05p000017E0");
MODULE_ALIAS("hid:b0003g*v00000B05p00001807");
MODULE_ALIAS("hid:b0003g*v00000B05p0000183D");
MODULE_ALIAS("hid:b0003g*v000004F2p00001125");
MODULE_ALIAS("hid:b0003g*v0000062Ap00005110");
MODULE_ALIAS("hid:b0003g*v00000C45p00005112");
MODULE_ALIAS("hid:b0005g*v00000B05p00008502");
MODULE_ALIAS("hid:b0003g*v0000048Dp0000CE50");
