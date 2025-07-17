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
	{ 0x86eb4617, "xfrm_input" },
	{ 0x112acc1f, "xfrm4_rcv" },
	{ 0xbb12c884, "xfrm4_protocol_deregister" },
	{ 0xbec83ed1, "xfrm_unregister_type" },
	{ 0x23876797, "xfrm4_protocol_register" },
	{ 0xfd400dfc, "xfrm_register_type" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x2f22f5df, "xfrm_input_resume" },
	{ 0xe55e9255, "__xfrm_state_destroy" },
	{ 0xfecf4cff, "ipv4_update_pmtu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf97b663f, "ipv4_redirect" },
	{ 0x99d6af1c, "xfrm_state_lookup" },
	{ 0xc5850110, "printk" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x1e11fdfe, "crypto_ahash_setkey" },
	{ 0x3a46dcf8, "crypto_alloc_ahash" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xe3ea5b1e, "crypto_ahash_digest" },
	{ 0x613f95e2, "skb_to_sgvec_nomark" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xdb5ad398, "skb_cow_data" },
	{ 0xf8778e57, "xfrm_output_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "xfrm_algo");

