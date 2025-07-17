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
	{ 0x4cd767a5, "param_get_bool" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0xc00b8dd3, "hid_add_device" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x4cb4f1bd, "hid_allocate_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x56d84093, "power_supply_powers" },
	{ 0x3f05e582, "power_supply_register" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x97255bdf, "strlen" },
	{ 0x9a29b78e, "param_set_bool" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x91452968, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9d669763, "memcpy" },
	{ 0x13843af, "hid_alloc_report_buf" },
	{ 0x52bb0701, "power_supply_changed" },
	{ 0xf144f336, "input_event" },
	{ 0x27a46ba, "hid_input_report" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x23fbf001, "hid_destroy_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xd712add3, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0xc5850110, "printk" },
	{ 0x20496c04, "input_free_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa1f3c5e4, "hid_parse_report" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");
