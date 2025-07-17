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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8354372d, "iio_trigger_unregister" },
};

MODULE_INFO(depends, "");

