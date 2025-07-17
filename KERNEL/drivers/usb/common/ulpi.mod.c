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
	{ 0x67f0e816, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8221889f, "driver_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd14537be, "of_device_request_module" },
	{ 0xffee383e, "of_device_uevent_modalias" },
	{ 0x8112492b, "device_register" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0xa7427670, "of_get_child_by_name" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x9cb21f29, "of_clk_set_defaults" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xa4c3d929, "of_get_next_available_child" },
	{ 0xfaa5e025, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

