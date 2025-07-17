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
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf144f336, "input_event" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x47c19580, "input_register_device" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x483a055b, "device_create_file" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xf9a482f9, "msleep" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20496c04, "input_free_device" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x97255bdf, "strlen" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x91452968, "_dev_err" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xe428104e, "device_remove_file" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b1799ef, "led_classdev_suspend" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37ab22f, "led_classdev_resume" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm8323");
