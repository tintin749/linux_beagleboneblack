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
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcc4f8ff0, "usb_poison_urb" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x9d669763, "memcpy" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x1bfd4a32, "usb_control_msg_recv" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*in*");
