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
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x8bba90ea, "skb_unlink" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x98ab2d84, "skb_dequeue_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x738c0b10, "skb_put" },
};

MODULE_INFO(depends, "");

