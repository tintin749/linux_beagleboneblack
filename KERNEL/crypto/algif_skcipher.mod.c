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
	{ 0x42f5e72d, "af_alg_poll" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0x44b38fb1, "sock_no_connect" },
	{ 0xfd98ce05, "sock_no_bind" },
	{ 0x3dbfcec2, "af_alg_release" },
	{ 0xe73d116a, "af_alg_unregister_type" },
	{ 0x79a76c15, "af_alg_register_type" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x951425dc, "sk_free" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0xc79dde92, "af_alg_wmem_wakeup" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xc1cfbaf4, "af_alg_get_rsgl" },
	{ 0xb34e3900, "af_alg_alloc_areq" },
	{ 0xcb1fbc2e, "af_alg_wait_for_data" },
	{ 0x77854e98, "af_alg_free_resources" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xde42660, "af_alg_count_tsgl" },
	{ 0x7600c967, "af_alg_async_cb" },
	{ 0xa95cc82b, "crypto_req_done" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x182aff01, "af_alg_sendpage" },
	{ 0x81fed507, "release_sock" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xf347b129, "crypto_alloc_skcipher" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xd82dd4e0, "sock_kmalloc" },
	{ 0x59d6b1ca, "af_alg_release_parent" },
	{ 0x89f8b90c, "sock_kfree_s" },
	{ 0x2a7c3ef2, "sock_kzfree_s" },
	{ 0x3e7c7342, "af_alg_pull_tsgl" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x78a0e9bd, "af_alg_sendmsg" },
};

MODULE_INFO(depends, "af_alg");

