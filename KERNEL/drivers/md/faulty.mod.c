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
	{ 0x42dfed5c, "seq_printf" },
	{ 0xcdb41c13, "unregister_md_personality" },
	{ 0xeaf30af, "bio_clone_fast" },
	{ 0x7021387b, "disk_stack_limits" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x6347906d, "bio_put" },
	{ 0x16537884, "md_set_array_sectors" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb2dbb58, "md_check_no_bitmap" },
	{ 0x7b43303, "register_md_personality" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");

