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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0xaed7b306, "hci_unregister_dev" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0x738c0b10, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");

