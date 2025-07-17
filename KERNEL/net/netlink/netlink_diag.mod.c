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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6309e811, "rhashtable_walk_exit" },
	{ 0x752d9c2, "sock_diag_put_meminfo" },
	{ 0x27b05872, "rhashtable_walk_next" },
	{ 0x713edf85, "sock_diag_unregister" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xe5259d4a, "sock_i_ino" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xdfb32db6, "sock_diag_register" },
	{ 0xb787eee9, "rhashtable_walk_stop" },
	{ 0x4eeb6d2, "rhashtable_walk_start_check" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0xf687108, "nla_put" },
	{ 0xb1c21e7, "nl_table" },
	{ 0x6e92aea, "nl_table_lock" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x41a17314, "rhashtable_walk_enter" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x318031b6, "sock_diag_save_cookie" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xec861f3f, "__netlink_dump_start" },
};

MODULE_INFO(depends, "");

