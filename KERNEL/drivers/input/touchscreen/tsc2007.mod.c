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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xf144f336, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xcea3a512, "of_property_read_u64" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x858845ea, "gpiod_get_raw_value" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007");
MODULE_ALIAS("of:N*T*Cti,tsc2007C*");
