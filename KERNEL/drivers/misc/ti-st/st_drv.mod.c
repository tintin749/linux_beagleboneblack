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
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x83d2a225, "single_open" },
	{ 0x29762e0c, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xcb510bc2, "complete_all" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x3e90c864, "tty_ldisc_flush" },
	{ 0x328a05f1, "strncpy" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0x2f129604, "gpiod_direction_output_raw" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xeb56f9e4, "tty_driver_flush_buffer" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9074ff70, "sysfs_notify" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x18730183, "stop_tty" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x7a348e01, "gpiod_set_raw_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "");

