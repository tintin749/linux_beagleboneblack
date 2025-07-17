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
	{ 0x9580e35e, "transport_class_register" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x19044d23, "attribute_container_classdev_to_container" },
	{ 0xfe25a832, "dev_printk" },
	{ 0xca76744a, "attribute_container_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x80841b3b, "attribute_container_register" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x9da6810, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf3ef9cb0, "attribute_container_find_class_device" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x607c184d, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x3d8c1e85, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");

