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
	{ 0x618727d6, "param_ops_bool" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa41c3dbc, "device_create_bin_file" },
	{ 0x483a055b, "device_create_file" },
	{ 0xf0a99826, "register_framebuffer" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa19dae68, "fb_sys_read" },
	{ 0x7eb99300, "framebuffer_alloc" },
	{ 0x4cf24332, "__usb_get_extra_descriptor" },
	{ 0x78520717, "usb_get_descriptor" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x71c90087, "memcmp" },
	{ 0xbb2bf8cf, "fb_sys_write" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf76b0a59, "read_current_timer" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x46ded0d2, "framebuffer_release" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x361df619, "unregister_framebuffer" },
	{ 0x8d8d7b61, "device_remove_bin_file" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0xf0ef52e8, "down" },
	{ 0x64db1b4e, "fb_deferred_io_init" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x8b5927a0, "down_timeout" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b11be53, "fb_deferred_io_cleanup" },
	{ 0xb9430045, "sys_fillrect" },
	{ 0x32bf10fb, "sys_copyarea" },
	{ 0x3e39ecc6, "sys_imageblit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xd39c839, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x7cdeeb4d, "pgprot_user" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0x581cde4e, "up" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x91452968, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");
