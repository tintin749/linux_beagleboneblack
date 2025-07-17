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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x91452968, "_dev_err" },
	{ 0xb2a87625, "__uio_register_device" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0xe97c4103, "ioremap" },
	{ 0xa032ffc7, "dma_alloc_attrs" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xf82c8787, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x42d0ee12, "uio_unregister_device" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*Cti,pruss-v1");
MODULE_ALIAS("of:N*T*Cti,pruss-v1C*");
MODULE_ALIAS("of:N*T*Cti,pruss-v2");
MODULE_ALIAS("of:N*T*Cti,pruss-v2C*");

MODULE_INFO(srcversion, "980067427DE6666A89BEC3C");
