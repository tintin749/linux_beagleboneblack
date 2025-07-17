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
	{ 0x501cec73, "class_find_device" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa9061e4b, "fpga_mgr_load" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa24491bf, "ida_free" },
	{ 0x2c8167cf, "fpga_bridges_disable" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x91452968, "_dev_err" },
	{ 0xe864a95a, "module_put" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x95ab5598, "fpga_mgr_unlock" },
	{ 0x633c4b9, "fpga_bridges_enable" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x607c184d, "get_device" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x291ff3e4, "fpga_mgr_lock" },
	{ 0xbf451cca, "__class_create" },
	{ 0x4756260d, "ida_destroy" },
	{ 0x50992cef, "try_module_get" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "fpga-mgr,fpga-bridge");

