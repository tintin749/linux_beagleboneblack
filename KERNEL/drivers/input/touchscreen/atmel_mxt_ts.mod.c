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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x61f90f46, "device_property_present" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xfd77ed18, "request_firmware_nowait" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x47c19580, "input_register_device" },
	{ 0x20496c04, "input_free_device" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x84b183ae, "strncmp" },
	{ 0x3560e651, "kmemdup_nul" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x79eaa49f, "input_mt_report_pointer_emulation" },
	{ 0xc37335b0, "complete" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0xf144f336, "input_event" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:qt602240_ts");
MODULE_ALIAS("i2c:atmel_mxt_ts");
MODULE_ALIAS("i2c:atmel_mxt_tp");
MODULE_ALIAS("i2c:maxtouch");
MODULE_ALIAS("i2c:mXT224");
MODULE_ALIAS("of:N*T*Catmel,maxtouch");
MODULE_ALIAS("of:N*T*Catmel,maxtouchC*");
MODULE_ALIAS("of:N*T*Catmel,qt602240_ts");
MODULE_ALIAS("of:N*T*Catmel,qt602240_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_ts");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tsC*");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tp");
MODULE_ALIAS("of:N*T*Catmel,atmel_mxt_tpC*");
MODULE_ALIAS("of:N*T*Catmel,mXT224");
MODULE_ALIAS("of:N*T*Catmel,mXT224C*");
