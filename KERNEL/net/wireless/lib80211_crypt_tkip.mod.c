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
	{ 0x6dfde36, "lib80211_unregister_crypto_ops" },
	{ 0xe28b8efb, "lib80211_register_crypto_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9d2e420, "crypto_alloc_shash" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x99bb8806, "memmove" },
	{ 0x80c4c319, "crc32_le" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0x738c0b10, "skb_put" },
	{ 0xe0d9832d, "wireless_send_event" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x71c90087, "memcmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5ce653b9, "crypto_shash_final" },
	{ 0x19790d3c, "crypto_shash_update" },
	{ 0xab62c2a4, "crypto_shash_setkey" },
	{ 0x5f754e5a, "memset" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "lib80211,libarc4");

