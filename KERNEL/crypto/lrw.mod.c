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
	{ 0x8096d7, "crypto_skcipher_encrypt" },
	{ 0xbe533c3d, "skcipher_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x84b183ae, "strncmp" },
	{ 0x226ba0f1, "crypto_inst_setname" },
	{ 0x794fd593, "crypto_grab_skcipher" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9b025af, "crypto_drop_spawn" },
	{ 0x63290063, "crypto_spawn_tfm2" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe934d9a8, "skcipher_walk_done" },
	{ 0xc5d85bd3, "skcipher_walk_virt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
};

MODULE_INFO(depends, "gf128mul");

