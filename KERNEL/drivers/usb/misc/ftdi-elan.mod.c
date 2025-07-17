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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf0ef52e8, "down" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf05900e4, "platform_device_register" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x581cde4e, "up" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0403pD6EAd*dc*dsc*dp*ic*isc*ip*in*");
