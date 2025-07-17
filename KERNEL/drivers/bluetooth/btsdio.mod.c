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
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x7f6abac6, "sdio_readsb" },
	{ 0x76dfdc17, "sdio_readb" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x2b8bc07d, "sdio_writesb" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x9313749f, "sdio_writeb" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0xaed7b306, "hci_unregister_dev" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "C143F34D209927BF2FD4FEC");
