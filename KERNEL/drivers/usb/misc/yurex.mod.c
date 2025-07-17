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
	{ 0x6a6d6acc, "default_llseek" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xcc4f8ff0, "usb_poison_urb" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0xc5850110, "printk" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x406e376b, "usb_get_intf" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x91452968, "_dev_err" },
	{ 0xb0dc51f5, "kill_fasync" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x271874a0, "fasync_helper" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xb2d4eb27, "usb_put_intf" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0x855a4eec, "usb_kill_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");
