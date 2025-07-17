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
	{ 0x7a3ebd6b, "bio_split" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfbb87ebe, "mddev_suspend" },
	{ 0x3c0f2bd3, "__tracepoint_block_bio_remap" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xcdb41c13, "unregister_md_personality" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xaeab54e2, "md_flush_request" },
	{ 0xc5850110, "printk" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x7021387b, "disk_stack_limits" },
	{ 0x356ee209, "bio_chain" },
	{ 0xe2fe13c9, "revalidate_disk_size" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x5e1713ed, "blk_queue_flag_clear" },
	{ 0x332c0bfc, "blk_queue_flag_set" },
	{ 0x5e4aff10, "bdevname" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x16537884, "md_set_array_sectors" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2b9996f5, "__traceiter_block_bio_remap" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xa8238920, "mddev_resume" },
	{ 0xcb2dbb58, "md_check_no_bitmap" },
	{ 0x122680c7, "md_integrity_register" },
	{ 0x7b43303, "register_md_personality" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");

