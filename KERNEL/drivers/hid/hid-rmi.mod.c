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
	{ 0x653333fe, "irq_create_mapping_affinity" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x23c6ab27, "__irq_domain_add" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf0ef52e8, "down" },
	{ 0x253325ce, "rmi_register_transport_device" },
	{ 0x581cde4e, "up" },
	{ 0x3b03dc91, "rmi_driver_resume" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xea290c5a, "rmi_set_attn_data" },
	{ 0x60f01c33, "irq_set_chip_and_handler_name" },
	{ 0x412b2982, "dummy_irq_chip" },
	{ 0xd718d606, "handle_simple_irq" },
	{ 0x4b4c4506, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xa0196d96, "irq_find_mapping" },
	{ 0xc1ce80a, "rmi_unregister_transport_device" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf144f336, "input_event" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x90552733, "rmi_driver_suspend" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b0003g*v000006CBp000081A7");
MODULE_ALIAS("hid:b*g0100v*p*");
