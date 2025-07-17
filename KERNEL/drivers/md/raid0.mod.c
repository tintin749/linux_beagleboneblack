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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xcdb41c13, "unregister_md_personality" },
	{ 0x7b43303, "register_md_personality" },
	{ 0xde37579, "bio_clone_blkg_association" },
	{ 0x3b3e5207, "__blkdev_issue_discard" },
	{ 0xaeab54e2, "md_flush_request" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x2b9996f5, "__traceiter_block_bio_remap" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x356ee209, "bio_chain" },
	{ 0x7a3ebd6b, "bio_split" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0x3c0f2bd3, "__tracepoint_block_bio_remap" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x5e1713ed, "blk_queue_flag_clear" },
	{ 0x122680c7, "md_integrity_register" },
	{ 0x16537884, "md_set_array_sectors" },
	{ 0x332c0bfc, "blk_queue_flag_set" },
	{ 0x7021387b, "disk_stack_limits" },
	{ 0x5b18b009, "blk_queue_io_opt" },
	{ 0x44a9055e, "blk_queue_io_min" },
	{ 0xaf69af29, "blk_queue_max_discard_sectors" },
	{ 0x3004a13, "blk_queue_max_write_zeroes_sectors" },
	{ 0xdd10848e, "blk_queue_max_write_same_sectors" },
	{ 0xd5229dc5, "blk_queue_max_hw_sectors" },
	{ 0xcb2dbb58, "md_check_no_bitmap" },
	{ 0xc5850110, "printk" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x5e4aff10, "bdevname" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "md-mod");

