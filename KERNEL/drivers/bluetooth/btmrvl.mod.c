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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x31981d17, "debugfs_create_u8" },
	{ 0xaf4c5fc2, "__hci_cmd_sync" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xaed7b306, "hci_unregister_dev" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x918fcb64, "debugfs_create_x16" },
	{ 0xf02a7658, "of_property_read_variable_u8_array" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf9f0c951, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x6a6d6acc, "default_llseek" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x448b4776, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x3066972, "wake_up_process" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x410addcc, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0x738c0b10, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "424479B65E8F10E47343A28");
