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
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x8b5927a0, "down_timeout" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa14e6ba, "usb_get_from_anchor" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc5850110, "printk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xb0dc51f5, "kill_fasync" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x614782f1, "usb_anchor_empty" },
	{ 0x581cde4e, "up" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x271874a0, "fasync_helper" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfaba248a, "usb_scuttle_anchored_urbs" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");
