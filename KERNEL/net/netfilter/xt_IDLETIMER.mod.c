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
	{ 0x8f217990, "xt_unregister_targets" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0x98171fcf, "device_destroy" },
	{ 0x5a2b5e0b, "xt_register_targets" },
	{ 0x8781d48, "device_create" },
	{ 0xbf451cca, "__class_create" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85647219, "alarm_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb74ddb51, "kobject_uevent" },
	{ 0x7e1c4af9, "sysfs_create_file_ns" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xe23cd479, "alarm_expires_remaining" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0x9074ff70, "sysfs_notify" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86e7a634, "alarm_start_relative" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x39f5802, "sysfs_remove_file_ns" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xebeb24a2, "alarm_cancel" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc271c3be, "mutex_lock" },
};

MODULE_INFO(depends, "");

