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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0x7eb8bf11, "n_tty_ioctl_helper" },
	{ 0xc43064a, "ppp_channel_index" },
	{ 0x464a8d8e, "tty_mode_ioctl" },
	{ 0x342443a2, "ppp_unit_number" },
	{ 0xc5850110, "printk" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x18730183, "stop_tty" },
	{ 0x7c4210e1, "start_tty" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x738c0b10, "skb_put" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xd3fbfefd, "tty_unthrottle" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xc37335b0, "complete" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xefde5979, "ppp_unregister_channel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xef5e95b3, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x1672d150, "ppp_output_wakeup" },
	{ 0x81696c18, "ppp_input_error" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x916c85bf, "ppp_input" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x4fad61, "consume_skb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x7f03b6a9, "crc_ccitt_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ppp_generic");

