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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xd3fbfefd, "tty_unthrottle" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5f754e5a, "memset" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x97255bdf, "strlen" },
	{ 0x464a8d8e, "tty_mode_ioctl" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xc37335b0, "complete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x945c707, "netif_schedule_queue" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xefb4fd1a, "ax25_ip_xmit" },
	{ 0x4fad61, "consume_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5850110, "printk" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xaeb7451e, "ax25_defaddr" },
	{ 0x7b8dbe3c, "ax25_header_ops" },
	{ 0xac93ae05, "ax25_bcast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ax25");

