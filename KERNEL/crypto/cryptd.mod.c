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
	{ 0xf347b129, "crypto_alloc_skcipher" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x80685e16, "ahash_register_instance" },
	{ 0x98513775, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x22606560, "shash_ahash_digest" },
	{ 0x794fd593, "crypto_grab_skcipher" },
	{ 0xda5c5bc4, "crypto_unregister_template" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0x5ce653b9, "crypto_shash_final" },
	{ 0x496e8e3e, "shash_ahash_finup" },
	{ 0xbe533c3d, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x89709b21, "crypto_shash_alg_has_setkey" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdbb9fab2, "crypto_grab_shash" },
	{ 0x5f754e5a, "memset" },
	{ 0x9a9d1d61, "crypto_grab_aead" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc1cba61f, "crypto_register_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xab62c2a4, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xc9b025af, "crypto_drop_spawn" },
	{ 0x5ad8da8d, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xac759b93, "crypto_enqueue_request" },
	{ 0xb3ecab8a, "crypto_skcipher_decrypt" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc4464c08, "crypto_skcipher_setkey" },
	{ 0xddb49b5c, "crypto_aead_setauthsize" },
	{ 0x2cd74a1c, "crypto_alloc_aead" },
	{ 0x63290063, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x3f505a79, "shash_ahash_update" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x581c716, "aead_register_instance" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3a46dcf8, "crypto_alloc_ahash" },
	{ 0x8096d7, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");

