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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x48a0f781, "w1_unregister_family" },
	{ 0xa986e4d9, "w1_register_family" },
	{ 0x91452968, "_dev_err" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3f05e582, "power_supply_register" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x6d4c3b0e, "power_supply_am_i_supplied" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x52bb0701, "power_supply_changed" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0xd712add3, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xae239781, "w1_write_block" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xed423968, "w1_read_block" },
	{ 0x7a0127d4, "w1_write_8" },
	{ 0x368ac8df, "w1_reset_select_slave" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "wire");

