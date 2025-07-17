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
	{ 0xa7b3181c, "up_read" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd3fbfefd, "tty_unthrottle" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xfb1d7438, "down_read" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xc5850110, "printk" },
	{ 0x7eb8bf11, "n_tty_ioctl_helper" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0xe864a95a, "module_put" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xeb56f9e4, "tty_driver_flush_buffer" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xdc746e8e, "tty_register_ldisc" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0x50992cef, "try_module_get" },
	{ 0x4a2d8b88, "tty_set_termios" },
};

MODULE_INFO(depends, "");

