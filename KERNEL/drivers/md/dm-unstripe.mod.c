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
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe07f91e3, "dm_set_target_max_io_len" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x37a0cba, "kfree" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "dm-mod");

