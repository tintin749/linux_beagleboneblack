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
	{ 0x271bc664, "iio_bus_type" },
	{ 0xcc32e812, "device_unregister" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xdb25da3e, "irq_work_queue" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe864a95a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0x6b22926b, "irq_work_sync" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

