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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xe9805148, "led_trigger_event" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf144f336, "input_event" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xb96022f3, "device_del" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0xa24491bf, "ida_free" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x929b994a, "__class_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x7bcf8005, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe864a95a, "module_put" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x11e54c6, "cdev_device_add" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x20496c04, "input_free_device" },
	{ 0x3066972, "wake_up_process" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xce726e94, "led_trigger_unregister_simple" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xdcf2dbfe, "kobject_get_path" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x8f8f657f, "bsearch" },
	{ 0x38e7052a, "led_trigger_register_simple" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xaf61fbab, "cdev_device_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xbf451cca, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x9c6febfc, "add_uevent_var" },
	{ 0x54ef1933, "input_allocate_device" },
};

MODULE_INFO(depends, "");

