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
	{ 0xfafcf341, "ipv6_chk_addr" },
	{ 0xac0af05c, "dst_release" },
	{ 0x3ebec595, "nft_register_expr" },
	{ 0x5f754e5a, "memset" },
	{ 0x3a99792d, "l3mdev_master_ifindex_rcu" },
	{ 0x403eb31d, "nft_fib_validate" },
	{ 0x1660641f, "nft_fib_store_result" },
	{ 0x84775af0, "nft_unregister_expr" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x52971d78, "ip6_route_lookup" },
	{ 0xa56c50b5, "nft_fib_init" },
	{ 0xa11201a0, "__nf_ip6_route" },
	{ 0xb3c36947, "nft_fib_policy" },
	{ 0x74a0fa1f, "nft_fib_dump" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");

