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
	{ 0xceeee77a, "param_array_ops" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x34782487, "param_ops_short" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe6d42467, "misc_register" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xab73f761, "hwmon_device_register" },
	{ 0x1a3a3c63, "devm_i2c_new_dummy_device" },
	{ 0x483a055b, "device_create_file" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe0bc1b49, "_dev_crit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfbaecf3c, "misc_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x94d2c889, "hwmon_device_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xaa19e4aa, "_kstrtol" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91452968, "_dev_err" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "hwmon-vid");

MODULE_ALIAS("i2c:w83793");
