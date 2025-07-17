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
	{ 0x8a07bbf4, "sbc_attrib_attrs" },
	{ 0x708500ec, "sbc_get_device_type" },
	{ 0x692a30b2, "target_backend_unregister" },
	{ 0x8f0d477c, "transport_backend_register" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x43145f74, "page_address" },
	{ 0xed0dede1, "blkdev_issue_zeroout" },
	{ 0x6fb193c1, "kunmap_high" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0xe69159f3, "kmap_high" },
	{ 0xefb996b4, "sbc_get_write_same_sectors" },
	{ 0xfffa3100, "sg_next" },
	{ 0xfc064e46, "sg_miter_start" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xd2e0f71a, "bio_add_page" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x5001f715, "bioset_integrity_create" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81da72ea, "target_configure_unmap_from_queue" },
	{ 0x6f058967, "blkdev_get_by_path" },
	{ 0x7c06cea1, "bioset_init" },
	{ 0x2ea9123e, "bioset_exit" },
	{ 0x450c36bc, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x462a2e75, "match_strlcpy" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e4aff10, "bdevname" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x89b273f1, "sg_miter_stop" },
	{ 0xadae8bd2, "sg_miter_next" },
	{ 0x7f17eed, "bio_integrity_add_page" },
	{ 0xf3784c95, "bio_integrity_alloc" },
	{ 0xe17242bd, "submit_bio" },
	{ 0xeb55f21e, "fs_bio_set" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0x2ebab094, "target_complete_cmd" },
	{ 0x6347906d, "bio_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x44690a22, "blkdev_issue_discard" },
	{ 0xec526886, "target_to_linux_sector" },
	{ 0xa0ac5750, "sbc_parse_cdb" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "target_core_mod");

