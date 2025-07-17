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
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdf0d0056, "rc_keydown" },
	{ 0x76f4a540, "rc_keyup" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xbc77045e, "rc_g_keycode_from_table" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91452968, "_dev_err" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x20496c04, "input_free_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xf144f336, "input_event" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x97255bdf, "strlen" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xeea0399, "strscpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0xc37335b0, "complete" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xc5850110, "printk" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c8aec3c, "usb_submit_urb" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "46B19176BDA17AEC6C7E279");
