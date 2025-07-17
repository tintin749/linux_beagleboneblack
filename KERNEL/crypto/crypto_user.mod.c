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
	{ 0xa7b3181c, "up_read" },
	{ 0x3de9cae1, "crypto_remove_final" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xb5855bb, "crypto_mod_put" },
	{ 0x5bd0748f, "crypto_del_default_rng" },
	{ 0x673962a9, "crypto_remove_spawns" },
	{ 0x457594fa, "crypto_alg_list" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xaa0e3743, "crypto_mod_get" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x2609c429, "netlink_kernel_release" },
	{ 0xdc3d9d1, "crypto_unregister_instance" },
	{ 0xcb9b894c, "netlink_rcv_skb" },
	{ 0xf687108, "nla_put" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xcb4e576f, "netlink_capable" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe2c0192f, "__netlink_kernel_create" },
	{ 0x73a1c7ec, "crypto_alg_mod_lookup" },
	{ 0x47317949, "crypto_alg_sem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xec861f3f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");

