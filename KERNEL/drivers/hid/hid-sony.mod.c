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
	{ 0x4756260d, "ida_destroy" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x483a055b, "device_create_file" },
	{ 0xd4e2b04c, "devm_led_classdev_register_ext" },
	{ 0x314fab7f, "hid_validate_values" },
	{ 0xe9d7469e, "input_ff_create_memless" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0x56d84093, "power_supply_powers" },
	{ 0xdd9934c5, "devm_power_supply_register" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x5f754e5a, "memset" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa24491bf, "ida_free" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0x292a31e8, "__hid_request" },
	{ 0xc058d310, "input_mt_sync_frame" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0xf144f336, "input_event" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0x47c19580, "input_register_device" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x91452968, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");
