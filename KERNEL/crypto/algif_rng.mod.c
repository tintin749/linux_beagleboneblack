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
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x6cfbca92, "sock_no_sendmsg" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xcfefcee7, "sock_no_ioctl" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x44b38fb1, "sock_no_connect" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0x3dbfcec2, "af_alg_release" },
	{ 0xe73d116a, "af_alg_unregister_type" },
	{ 0x79a76c15, "af_alg_register_type" },
	{ 0x37a0cba, "kfree" },
	{ 0xdca13a1b, "crypto_alloc_rng" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5f754e5a, "memset" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0xa2e75443, "crypto_rng_reset" },
	{ 0x59d6b1ca, "af_alg_release_parent" },
	{ 0x89f8b90c, "sock_kfree_s" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd82dd4e0, "sock_kmalloc" },
};

MODULE_INFO(depends, "af_alg");

