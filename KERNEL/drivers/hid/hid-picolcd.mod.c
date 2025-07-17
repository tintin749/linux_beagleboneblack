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
	{ 0x2d3385d3, "system_wq" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x83d2a225, "single_open" },
	{ 0x97255bdf, "strlen" },
	{ 0x46ded0d2, "framebuffer_release" },
	{ 0x29762e0c, "single_release" },
	{ 0xa19dae68, "fb_sys_read" },
	{ 0xf778e78f, "backlight_device_register" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x292a31e8, "__hid_request" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x32bf10fb, "sys_copyarea" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0x8223439a, "hid_debug_event" },
	{ 0x5495392, "hid_debug" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf144f336, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0xf0a99826, "register_framebuffer" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca11f91e, "hid_set_field" },
	{ 0x448b4776, "simple_open" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x483a055b, "device_create_file" },
	{ 0x13843af, "hid_alloc_report_buf" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb9430045, "sys_fillrect" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x3e39ecc6, "sys_imageblit" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xbb2bf8cf, "fb_sys_write" },
	{ 0x20496c04, "input_free_device" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x7eb99300, "framebuffer_alloc" },
	{ 0x7b11be53, "fb_deferred_io_cleanup" },
	{ 0x64db1b4e, "fb_deferred_io_init" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe4bccdad, "ir_raw_event_store" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x9233f84c, "backlight_device_unregister" },
	{ 0xf37ea5ef, "ir_raw_event_handle" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe682362d, "hid_output_report" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0x361df619, "unregister_framebuffer" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");
