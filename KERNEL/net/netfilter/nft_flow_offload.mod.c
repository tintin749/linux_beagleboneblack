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
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9ed3cae8, "flow_offload_free" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xac0af05c, "dst_release" },
	{ 0x5bba009a, "flow_offload_add" },
	{ 0xfbf0c456, "flow_offload_route_init" },
	{ 0x664c02c3, "flow_offload_alloc" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf687108, "nla_put" },
	{ 0x97255bdf, "strlen" },
	{ 0x7351516a, "nf_flow_table_cleanup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x10c68ddd, "nf_route" },
	{ 0x5f754e5a, "memset" },
	{ 0xf23eb3fa, "nf_ct_netns_get" },
	{ 0x5c40d8ba, "nft_flowtable_lookup" },
	{ 0x43c5be10, "nf_tables_deactivate_flowtable" },
	{ 0x23fe840f, "nf_ct_netns_put" },
	{ 0x8c5c3d1b, "nft_chain_validate_hooks" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");

