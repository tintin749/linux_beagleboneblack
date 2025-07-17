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
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x20496c04, "input_free_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x8c3019f, "usb_driver_claim_interface" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf144f336, "input_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x91452968, "_dev_err" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0471p0602d*dc*dsc*dp*ic*isc*ip*in*");
