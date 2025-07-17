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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x48a0f781, "w1_unregister_family" },
	{ 0xa986e4d9, "w1_register_family" },
	{ 0xc5850110, "printk" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0x483a055b, "device_create_file" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x4a5a6dc3, "w1_touch_bit" },
	{ 0xc60c97f1, "w1_next_pullup" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x84b183ae, "strncmp" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xed423968, "w1_read_block" },
	{ 0xcc9acab9, "w1_read_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7a0127d4, "w1_write_8" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xae239781, "w1_write_block" },
	{ 0xc02623a7, "w1_reset_bus" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "wire");

