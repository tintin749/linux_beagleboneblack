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
	{ 0x968034d3, "tty_unregister_driver" },
	{ 0x10aacb52, "put_tty_driver" },
	{ 0x994692ad, "tty_register_driver" },
	{ 0xeb898af7, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xd1b941a5, "__tty_alloc_driver" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0x3ff1053e, "tty_wakeup" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0x61004fdf, "tty_insert_flip_string_fixed_flag" },
	{ 0xf1a50d83, "__tty_insert_flip_char" },
	{ 0x82d7381, "tty_hangup" },
	{ 0x900c0e7c, "tty_register_device" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x39b689a3, "register_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5f754e5a, "memset" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7eb8bf11, "n_tty_ioctl_helper" },
	{ 0xcd0d977a, "tty_port_block_til_ready" },
	{ 0x100ccaff, "tty_unregister_device" },
	{ 0x3e90c864, "tty_ldisc_flush" },
	{ 0x25b8aad7, "tty_kref_put" },
	{ 0x78739415, "tty_vhangup" },
	{ 0x85c6ab2a, "tty_port_tty_get" },
	{ 0x3bc6e739, "tty_port_lower_dtr_rts" },
	{ 0x5757778b, "tty_port_tty_set" },
	{ 0x7cd667f5, "tty_port_close_end" },
	{ 0x2ae45596, "tty_port_close_start" },
	{ 0xbd90fe92, "tty_port_hangup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b33bff9, "tty_port_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5d5c133d, "tty_port_install" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x495d08a4, "tty_hung_up_p" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x98ab2d84, "skb_dequeue_tail" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x2384dd17, "tty_port_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x146cdd8f, "tty_port_tty_wakeup" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2127e7b1, "tty_name" },
	{ 0xbbd9242b, "tty_port_tty_hangup" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x4fad61, "consume_skb" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x6c6073d9, "tty_write_room" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

