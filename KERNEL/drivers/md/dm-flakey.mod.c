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
	{ 0xc5850110, "printk" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x70326f42, "dm_per_bio_data" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x43145f74, "page_address" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe9a08116, "blkdev_report_zones" },
	{ 0x3a2e1b39, "dm_report_zones_cb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "dm-mod");

