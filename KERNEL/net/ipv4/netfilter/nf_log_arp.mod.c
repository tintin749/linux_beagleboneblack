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
	{ 0x38a9e7ab, "nf_log_unregister" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x427f8a19, "nf_log_register" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xfb6c022b, "nf_log_dump_vlan" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x8fb2a242, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xb4aec65, "init_net" },
	{ 0x604cbc5d, "nf_log_set" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x75eb8dcb, "nf_log_unset" },
};

MODULE_INFO(depends, "nf_log_common");

