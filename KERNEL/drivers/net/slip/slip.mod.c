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
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0x15f90688, "slhc_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x190e7ae8, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2a928918, "slhc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0x4fad61, "consume_skb" },
	{ 0xec1c2713, "tty_chars_in_buffer" },
	{ 0x7c331577, "dev_trans_start" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x82d7381, "tty_hangup" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x92b57248, "flush_work" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x97255bdf, "strlen" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x464a8d8e, "tty_mode_ioctl" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xc5850110, "printk" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0x9d669763, "memcpy" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "slhc");

