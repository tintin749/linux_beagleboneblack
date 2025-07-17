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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0x9b8eb006, "devm_iio_dmaengine_buffer_alloc" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcbcbead6, "device_property_read_string" },
	{ 0x689f40fd, "iio_device_attach_buffer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xe864a95a, "module_put" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x607c184d, "get_device" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x37a0cba, "kfree" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
	{ 0x50992cef, "try_module_get" },
	{ 0x61f90f46, "device_property_present" },
};

MODULE_INFO(depends, "industrialio-buffer-dmaengine");

MODULE_ALIAS("of:N*T*Cadi,axi-adc-10.0.a");
MODULE_ALIAS("of:N*T*Cadi,axi-adc-10.0.aC*");
