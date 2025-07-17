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
	{ 0xc058d310, "input_mt_sync_frame" },
	{ 0xd4e2b04c, "devm_led_classdev_register_ext" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x39a9b2de, "input_mt_destroy_slots" },
	{ 0x47c19580, "input_register_device" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6ad34cf0, "usb_hid_driver" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0xf144f336, "input_event" },
	{ 0x91452968, "_dev_err" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004F3p0000074D");
MODULE_ALIAS("hid:b0003g*v000004F3p00000755");
MODULE_ALIAS("hid:b0018g*v000004F3p00000401");
