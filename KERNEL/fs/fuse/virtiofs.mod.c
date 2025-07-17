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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x2279e2df, "fuse_free_conn" },
	{ 0xfab8f19, "fuse_conn_destroy" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x43145f74, "page_address" },
	{ 0xcd8004b8, "fuse_fill_super_common" },
	{ 0xd4cfd7f, "kill_anon_super" },
	{ 0x632e8f57, "fuse_request_end" },
	{ 0x7b8e2779, "__fs_parse" },
	{ 0x2b9086f3, "fuse_get_unique" },
	{ 0x4d73b8a2, "deactivate_locked_super" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x227bfe28, "fuse_mount_get" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4cc1b1b2, "virtqueue_kick_prepare" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9965771e, "fuse_conn_init" },
	{ 0x8462dabb, "virtqueue_add_outbuf" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd1a516b2, "fuse_send_init" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x1737b345, "virtqueue_add_sgs" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x328a05f1, "strncpy" },
	{ 0xcf707a05, "virtqueue_disable_cb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x764313dd, "fuse_mount_put" },
	{ 0xdd27fa87, "memchr" },
	{ 0x2d713180, "fuse_dev_install" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd2dca95d, "fuse_dev_free" },
	{ 0x1a0ee9e2, "fuse_dev_alloc" },
	{ 0x57822f50, "virtqueue_notify" },
	{ 0xfcdda0ed, "fuse_dequeue_forget" },
	{ 0x2571ed43, "fuse_mount_remove" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x35d8e154, "sget_fc" },
	{ 0xd07f543, "get_anon_bdev" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xa81d390b, "virtqueue_is_broken" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x6084bbef, "virtqueue_enable_cb" },
	{ 0xdd626ee3, "fuse_len_args" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0x760e56a5, "register_virtio_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d0000001Av*");
