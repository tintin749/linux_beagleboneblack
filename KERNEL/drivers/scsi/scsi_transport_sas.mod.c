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
	{ 0x24239d74, "scsi_remove_target" },
	{ 0x97255bdf, "strlen" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x2cd8dc3b, "transport_destroy_device" },
	{ 0xca76744a, "attribute_container_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x41c90efb, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf39c10b5, "scsi_is_host_device" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xb96022f3, "device_del" },
	{ 0xf6a8a4b2, "transport_add_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x82a0f2d1, "transport_configure_device" },
	{ 0x84b183ae, "strncmp" },
	{ 0x80841b3b, "attribute_container_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xfa6d327e, "sysfs_remove_link" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x9da6810, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x49dc6527, "sysfs_create_link" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1c9d7c68, "transport_setup_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x607c184d, "get_device" },
	{ 0x863f2af5, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x70d05b88, "scsi_get_vpd_page" },
	{ 0x7fbb1518, "transport_remove_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xec57b011, "scsi_remove_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x75253d39, "bsg_job_done" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0xebcc2646, "bsg_remove_queue" },
	{ 0x18c4784e, "bsg_setup_queue" },
	{ 0xa19e9a65, "scsi_mode_sense" },
};

MODULE_INFO(depends, "");

