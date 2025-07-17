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
	{ 0x3dd38bf, "xfrm6_rcv" },
	{ 0x52d305a0, "xfrm6_find_1stfragopt" },
	{ 0xc5402e07, "ipcomp_output" },
	{ 0xa7c779d4, "ipcomp_input" },
	{ 0xa6a0284a, "ipcomp_destroy" },
	{ 0x1d685b0c, "xfrm6_protocol_deregister" },
	{ 0xbec83ed1, "xfrm_unregister_type" },
	{ 0xcac7e25d, "xfrm6_protocol_register" },
	{ 0xc5850110, "printk" },
	{ 0xfd400dfc, "xfrm_register_type" },
	{ 0xc633fd64, "ip6_redirect" },
	{ 0x168809ba, "ip6_update_pmtu" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0xe55e9255, "__xfrm_state_destroy" },
	{ 0x99d6af1c, "xfrm_state_lookup" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x391c94e0, "xfrm_state_insert" },
	{ 0xc9625efa, "xfrm_init_state" },
	{ 0x18c553fe, "xfrm6_tunnel_alloc_spi" },
	{ 0x59e02fcd, "xfrm_state_alloc" },
	{ 0xbcd653f5, "xfrm6_tunnel_spi_lookup" },
	{ 0x8cef447, "ipcomp_init_state" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "xfrm_ipcomp,xfrm6_tunnel");

