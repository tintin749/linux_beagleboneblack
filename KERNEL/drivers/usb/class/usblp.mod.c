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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x1000e51, "schedule" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x406e376b, "usb_get_intf" },
	{ 0x5f754e5a, "memset" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0x91452968, "_dev_err" },
	{ 0x2f63e634, "usb_poison_anchored_urbs" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0xb2d4eb27, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0xc5850110, "printk" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc07dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp02ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc07dsc01dp03ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic07isc01ip03in*");
MODULE_ALIAS("usb:v04B8p0202d*dc*dsc*dp*ic*isc*ip*in*");
