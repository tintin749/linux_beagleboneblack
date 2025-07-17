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
	{ 0x42160169, "flush_workqueue" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6039b599, "sg_copy_from_buffer" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x569752c8, "usb_lock_device_for_reset" },
	{ 0x6eaf9fa3, "mmc_request_done" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3066972, "wake_up_process" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0x7fa37630, "mmc_remove_host" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x51ee8a5d, "mmc_add_host" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfda41262, "mmc_free_host" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x86c00727, "mmc_alloc_host" },
	{ 0x45158076, "usb_string" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5735750c, "usb_sg_wait" },
	{ 0x24d273d1, "add_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x328542d7, "usb_sg_init" },
	{ 0x938f99c5, "sg_copy_to_buffer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc37335b0, "complete" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f754e5a, "memset" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x91452968, "_dev_err" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xcb60429e, "mmc_detect_change" },
	{ 0x328a05f1, "strncpy" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0xbfdb76a3, "usb_sg_cancel" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2201p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p012Cd*dc*dsc*dp*ic*isc*ip*in*");
