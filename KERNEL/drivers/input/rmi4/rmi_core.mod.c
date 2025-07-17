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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x67f0e816, "bus_register" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8221889f, "driver_register" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0xa0196d96, "irq_find_mapping" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x653333fe, "irq_create_mapping_affinity" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x87bdb0ef, "serio_interrupt" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xf144f336, "input_event" },
	{ 0xd6dece59, "serio_unregister_port" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x23c6ab27, "__irq_domain_add" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xb96022f3, "device_del" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x328a05f1, "strncpy" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa7427670, "of_get_child_by_name" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xd718d606, "handle_simple_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x60f01c33, "irq_set_chip_and_handler_name" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x47c19580, "input_register_device" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x4dc4fe5c, "irq_domain_simple_ops" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x67ebd3c9, "__serio_register_port" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x4b4c4506, "irq_domain_remove" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc058d310, "input_mt_sync_frame" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x59fdae9b, "input_mt_assign_slots" },
};

MODULE_INFO(depends, "");

