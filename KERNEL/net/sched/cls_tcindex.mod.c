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
	{ 0x16434bcc, "unregister_tcf_proto_ops" },
	{ 0x6061b170, "register_tcf_proto_ops" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x778f13c9, "tcf_exts_change" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5f754e5a, "memset" },
	{ 0x4665ce25, "tcf_exts_validate" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xbe0e3cba, "tcf_queue_work" },
	{ 0x73e5201a, "__put_net" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa73b94f6, "tcf_exts_destroy" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xd23a77d4, "tcf_exts_dump_stats" },
	{ 0x37cf7a09, "tcf_exts_dump" },
	{ 0xf687108, "nla_put" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x187ca862, "tcf_action_exec" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
};

MODULE_INFO(depends, "");

