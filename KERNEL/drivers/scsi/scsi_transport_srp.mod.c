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
	{ 0xfe25a832, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x2cd8dc3b, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xca76744a, "attribute_container_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xf39c10b5, "scsi_is_host_device" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xb96022f3, "device_del" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xf6a8a4b2, "transport_add_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x82a0f2d1, "transport_configure_device" },
	{ 0x80841b3b, "attribute_container_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x9da6810, "transport_class_unregister" },
	{ 0x98509927, "scsi_target_unblock" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1c9d7c68, "transport_setup_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x607c184d, "get_device" },
	{ 0x11bf59bc, "__scsi_iterate_devices" },
	{ 0x863f2af5, "device_for_each_child" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x7fbb1518, "transport_remove_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd8f4acb4, "scsi_target_block" },
	{ 0x2e641d99, "dev_set_name" },
};

MODULE_INFO(depends, "");

