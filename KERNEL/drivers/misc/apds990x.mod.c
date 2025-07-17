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
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x91452968, "_dev_err" },
	{ 0x6f12af19, "regulator_bulk_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x12a38747, "usleep_range" },
	{ 0x14e957a1, "regulator_bulk_enable" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9074ff70, "sysfs_notify" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xe1cdc1a3, "i2c_smbus_read_byte_data" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b5c693c, "regulator_bulk_free" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x98c9d74e, "regulator_bulk_disable" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4203f70c, "i2c_smbus_write_word_data" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:apds990x");
