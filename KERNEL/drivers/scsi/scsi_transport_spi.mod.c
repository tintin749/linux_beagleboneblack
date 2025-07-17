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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x9580e35e, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x97255bdf, "strlen" },
	{ 0xfe25a832, "dev_printk" },
	{ 0xa78c7cf, "scsi_get_device_flags_keyed" },
	{ 0x2fd72ddd, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x843cc3d0, "anon_transport_class_register" },
	{ 0xca76744a, "attribute_container_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa80a32e4, "scsi_autopm_get_device" },
	{ 0x6214a487, "scsi_device_quiesce" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf39c10b5, "scsi_is_host_device" },
	{ 0x5f754e5a, "memset" },
	{ 0xcb46da6, "sysfs_chmod_file" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0x1aed12cf, "__scsi_execute" },
	{ 0x84b183ae, "strncmp" },
	{ 0x71a9be68, "sdev_prefix_printk" },
	{ 0x80841b3b, "attribute_container_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9da6810, "transport_class_unregister" },
	{ 0xec3a015f, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0xe9251e73, "scsi_device_put" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x41f314d3, "scsi_device_set_state" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x863f2af5, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xe08779a7, "scsi_target_quiesce" },
	{ 0x1f9af971, "scsi_is_target_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x81c89467, "scsi_device_get" },
	{ 0xa46e82e5, "scsi_autopm_put_device" },
	{ 0xeec81ffc, "anon_transport_class_unregister" },
	{ 0x3d8c1e85, "scsi_is_sdev_device" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

