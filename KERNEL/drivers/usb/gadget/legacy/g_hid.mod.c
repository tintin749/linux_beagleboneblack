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
	{ 0x2cb57ed0, "usb_add_config" },
	{ 0x7350b9b0, "__platform_driver_probe" },
	{ 0x1e483b22, "usb_otg_descriptor_init" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x78f0c107, "usb_put_function_instance" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x7692276c, "usb_otg_descriptor_alloc" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x36baa246, "usb_composite_overwrite_options" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2c651628, "usb_composite_probe" },
	{ 0xa45bc263, "usb_add_function" },
	{ 0x8b869545, "usb_put_function" },
	{ 0x64314424, "usb_composite_unregister" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x31336c66, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a4b353a, "usb_string_ids_tab" },
	{ 0x479f3840, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x4940b6ab, "usb_remove_function" },
};

MODULE_INFO(depends, "");

