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
	{ 0x20496c04, "input_free_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xf144f336, "input_event" },
	{ 0x91452968, "_dev_err" },
	{ 0xb9fac3a0, "i2c_smbus_read_byte" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x95ff4329, "led_classdev_unregister" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:qt2160");
