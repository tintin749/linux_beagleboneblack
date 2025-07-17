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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x83d2a225, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0xe9d7469e, "input_ff_create_memless" },
	{ 0x29762e0c, "single_release" },
	{ 0xd712add3, "power_supply_unregister" },
	{ 0xb74ddb51, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x56d84093, "power_supply_powers" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf144f336, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x448b4776, "simple_open" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x483a055b, "device_create_file" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x20496c04, "input_free_device" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x607c184d, "get_device" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0x3f05e582, "power_supply_register" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x54ef1933, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");
