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
	{ 0x498ff43f, "sbc_dif_verify" },
	{ 0x4b99888, "iov_iter_zero" },
	{ 0x331806bf, "vfs_iter_read" },
	{ 0xfffa3100, "sg_next" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xbc7d0fb6, "vfs_iter_write" },
	{ 0x75e0d640, "iov_iter_bvec" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xefb996b4, "sbc_get_write_same_sectors" },
	{ 0x81da72ea, "target_configure_unmap_from_queue" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x462a2e75, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ae49312, "vfs_fsync_range" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ebab094, "target_complete_cmd" },
	{ 0x44690a22, "blkdev_issue_discard" },
	{ 0xec526886, "target_to_linux_sector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xa0ac5750, "sbc_parse_cdb" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x72e434a3, "filp_open" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x5f754e5a, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6c17cb0, "kernel_write" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x221899b2, "filp_close" },
};

MODULE_INFO(depends, "target_core_mod");

