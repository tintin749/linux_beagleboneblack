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
	{ 0x2cb57ed0, "usb_add_config" },
	{ 0x1e483b22, "usb_otg_descriptor_init" },
	{ 0x3d386a97, "gether_set_host_addr" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x78f0c107, "usb_put_function_instance" },
	{ 0xc5850110, "printk" },
	{ 0x7692276c, "usb_otg_descriptor_alloc" },
	{ 0xc7148246, "gether_set_qmult" },
	{ 0x91452968, "_dev_err" },
	{ 0x36baa246, "usb_composite_overwrite_options" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2c651628, "usb_composite_probe" },
	{ 0xa45bc263, "usb_add_function" },
	{ 0x8b869545, "usb_put_function" },
	{ 0x63f15c6e, "gether_set_dev_addr" },
	{ 0x64314424, "usb_composite_unregister" },
	{ 0x31336c66, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a4b353a, "usb_string_ids_tab" },
	{ 0x479f3840, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x4940b6ab, "usb_remove_function" },
};

MODULE_INFO(depends, "");

