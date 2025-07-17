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
	{ 0xceeee77a, "param_array_ops" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xe7d6389a, "ip_vs_conn_in_get" },
	{ 0xff890c49, "skb_ensure_writable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe3c3f0e1, "ip_vs_conn_new" },
	{ 0x9b69cd17, "ip_vs_nfct_expect_related" },
	{ 0xa4b40d87, "__nf_nat_mangle_tcp_packet" },
	{ 0x14b5a1b, "ip_vs_conn_put" },
	{ 0x900fcd4a, "ip_vs_tcp_conn_listen" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x309b60a8, "ip_vs_conn_out_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xc5850110, "printk" },
	{ 0x31b7433e, "register_ip_vs_app_inc" },
	{ 0x21eeeca9, "register_ip_vs_app" },
	{ 0xd48e0385, "unregister_ip_vs_app" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");

