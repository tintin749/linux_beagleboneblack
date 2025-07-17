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
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xcfefcee7, "sock_no_ioctl" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x44b38fb1, "sock_no_connect" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0x3dbfcec2, "af_alg_release" },
	{ 0xe73d116a, "af_alg_unregister_type" },
	{ 0x79a76c15, "af_alg_register_type" },
	{ 0x42ce4856, "af_alg_make_sg" },
	{ 0xa3681163, "iov_iter_advance" },
	{ 0x5ed9ed67, "af_alg_free_sg" },
	{ 0xe3ea5b1e, "crypto_ahash_digest" },
	{ 0x67d9e19e, "crypto_ahash_finup" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc5850110, "printk" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xccbdac7f, "crypto_ahash_final" },
	{ 0x8b25258, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x59d6b1ca, "af_alg_release_parent" },
	{ 0x89f8b90c, "sock_kfree_s" },
	{ 0x2a7c3ef2, "sock_kzfree_s" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x951425dc, "sk_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0xa805637, "af_alg_accept" },
	{ 0x81fed507, "release_sock" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x5f754e5a, "memset" },
	{ 0x3a46dcf8, "crypto_alloc_ahash" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x1e11fdfe, "crypto_ahash_setkey" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa95cc82b, "crypto_req_done" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xd82dd4e0, "sock_kmalloc" },
};

MODULE_INFO(depends, "af_alg");

