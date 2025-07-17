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
	{ 0xda5c5bc4, "crypto_unregister_template" },
	{ 0xc1cba61f, "crypto_register_template" },
	{ 0xbe533c3d, "skcipher_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdbb9fab2, "crypto_grab_shash" },
	{ 0xe5304024, "crypto_grab_spawn" },
	{ 0x794fd593, "crypto_grab_skcipher" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xc5850110, "printk" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xab62c2a4, "crypto_shash_setkey" },
	{ 0xd45b9cf4, "poly1305_core_setkey" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x78d61beb, "crypto_cipher_setkey" },
	{ 0xa95cc82b, "crypto_req_done" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b025af, "crypto_drop_spawn" },
	{ 0xc72b088f, "crypto_cipher_encrypt_one" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
	{ 0xbcb90cb3, "poly1305_core_emit" },
	{ 0x21f3700, "poly1305_core_blocks" },
	{ 0xd917f0f5, "crypto_cipher_decrypt_one" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5ce653b9, "crypto_shash_final" },
	{ 0x89b273f1, "sg_miter_stop" },
	{ 0x19790d3c, "crypto_shash_update" },
	{ 0xadae8bd2, "sg_miter_next" },
	{ 0xfc064e46, "sg_miter_start" },
	{ 0x1a4af81b, "sg_nents" },
	{ 0xee0ed69a, "crypto_spawn_tfm" },
	{ 0x63290063, "crypto_spawn_tfm2" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "libpoly1305");

