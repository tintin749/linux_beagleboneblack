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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x738c0b10, "skb_put" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3561afb0, "nfc_alloc_recv_skb" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x915c567a, "nfc_digital_register_device" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xac66f4be, "nfc_digital_allocate_device" },
	{ 0x90f0ff49, "regulator_get_voltage" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x9d55137d, "devm_gpiod_get_index_optional" },
	{ 0x1954f1aa, "devm_gpiod_get_index" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xefc13bc6, "nfc_digital_free_device" },
	{ 0xe0256f8b, "nfc_digital_unregister_device" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0x96d80527, "regulator_enable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe5509cae, "spi_write_then_read" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
};

MODULE_INFO(depends, "nfc,nfc_digital");

MODULE_ALIAS("spi:trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970a");
MODULE_ALIAS("of:N*T*Cti,trf7970aC*");
