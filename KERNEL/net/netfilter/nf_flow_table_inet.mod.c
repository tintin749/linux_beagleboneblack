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
	{ 0x6601bbad, "nf_flow_table_free" },
	{ 0xc1e301dd, "nf_flow_table_offload_setup" },
	{ 0x2d68d32f, "nf_flow_table_init" },
	{ 0xe0ef84be, "nft_unregister_flowtable_type" },
	{ 0x568b94af, "nft_register_flowtable_type" },
	{ 0xc285bd8b, "nf_flow_rule_route_ipv6" },
	{ 0xd2e28d86, "nf_flow_rule_route_ipv4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa9ae2ecf, "nf_flow_offload_ipv6_hook" },
	{ 0xc420395d, "nf_flow_offload_ip_hook" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");

