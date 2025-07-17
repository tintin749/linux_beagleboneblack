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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xbf7e42b0, "skb_to_sgvec" },
	{ 0xf28048c1, "xfrm_dev_resume" },
	{ 0xbec83ed1, "xfrm_unregister_type" },
	{ 0x43145f74, "page_address" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xfecf4cff, "ipv4_update_pmtu" },
	{ 0xbb12c884, "xfrm4_protocol_deregister" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xfffa3100, "sg_next" },
	{ 0x70ecab2b, "pskb_put" },
	{ 0xda22183a, "skb_page_frag_refill" },
	{ 0xdb5ad398, "skb_cow_data" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x2f22f5df, "xfrm_input_resume" },
	{ 0x5f754e5a, "memset" },
	{ 0xc1560f77, "skb_checksum" },
	{ 0xc5850110, "printk" },
	{ 0x86eb4617, "xfrm_input" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x5481ae70, "crypto_aead_encrypt" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x5ad8da8d, "crypto_aead_setkey" },
	{ 0xfd400dfc, "xfrm_register_type" },
	{ 0x5a1e5d50, "xfrm_state_mtu" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xf97b663f, "ipv4_redirect" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0xf8778e57, "xfrm_output_resume" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0xe55e9255, "__xfrm_state_destroy" },
	{ 0xd4a1738, "km_new_mapping" },
	{ 0x112acc1f, "xfrm4_rcv" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xace04862, "crypto_aead_decrypt" },
	{ 0x23876797, "xfrm4_protocol_register" },
	{ 0xddb49b5c, "crypto_aead_setauthsize" },
	{ 0x2cd74a1c, "crypto_alloc_aead" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x99d6af1c, "xfrm_state_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb266e265, "___pskb_trim" },
	{ 0x42fa7c1d, "__skb_ext_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x6bc1fa29, "__put_page" },
};

MODULE_INFO(depends, "xfrm_algo");

