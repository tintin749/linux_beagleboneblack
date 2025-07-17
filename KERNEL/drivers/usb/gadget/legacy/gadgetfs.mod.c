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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x28b115c9, "get_tree_single" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0x8d5bd773, "kthread_unuse_mm" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xdcd58b6e, "generic_delete_inode" },
	{ 0x37970b69, "dput" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x4534524b, "dup_iter" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1696865d, "d_add" },
	{ 0xd947a192, "usb_ep_set_halt" },
	{ 0x729aec6a, "usb_gadget_unregister_driver" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xb0b7d722, "usb_gadget_set_state" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbdaad4aa, "d_delete" },
	{ 0x7c8366c9, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0xab4718fc, "kill_litter_super" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0x328a05f1, "strncpy" },
	{ 0x271874a0, "fasync_helper" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf9a46dd1, "usb_ep_clear_halt" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfaca3c54, "usb_ep_dequeue" },
	{ 0x5419515e, "usb_gadget_vbus_draw" },
	{ 0xaa147d12, "simple_dir_operations" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x65ab4d4a, "kthread_use_mm" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x21e87314, "kiocb_set_cancel_fn" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9cfb4870, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x889a98c5, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x10e914b, "current_time" },
	{ 0xc824bee6, "d_make_root" },
	{ 0xb0dc51f5, "kill_fasync" },
	{ 0x86cfb2b5, "simple_statfs" },
	{ 0x598d92a6, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xa1b86e22, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0xebf568ca, "usb_ep_fifo_flush" },
	{ 0x239c20cc, "simple_dir_inode_operations" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");

