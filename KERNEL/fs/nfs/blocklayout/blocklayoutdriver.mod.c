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
	{ 0x225aec9, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9b07626e, "pnfs_generic_pg_init_write" },
	{ 0xeb55f21e, "fs_bio_set" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xaaa14361, "nfs_dreq_bytes_left" },
	{ 0x43145f74, "page_address" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x58433db2, "rpc_unlink" },
	{ 0xc4fb06d6, "pnfs_ld_write_done" },
	{ 0x140c2db1, "pnfs_error_mark_layout_for_return" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x37970b69, "dput" },
	{ 0x3d139cd3, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xba929361, "nfs4_mark_deviceid_unavailable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xfb18bace, "rpc_mkpipe_data" },
	{ 0x43e7acb5, "rpc_mkpipe_dentry" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfdca37ac, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0x13887769, "rpc_get_sb_net" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x87f3836d, "pnfs_generic_pg_cleanup" },
	{ 0x784a1413, "pnfs_generic_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x47ef8966, "xdr_init_decode_pages" },
	{ 0xbe75b6af, "rpc_queue_upcall" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd2e0f71a, "bio_add_page" },
	{ 0xca835a17, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x6f058967, "blkdev_get_by_path" },
	{ 0xbde4910a, "nfs_pageio_reset_write_mds" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5b67589, "rpc_d_lookup_sb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xb3c6fc07, "blkdev_get_by_dev" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd1e8cd54, "nfs4_put_deviceid_node" },
	{ 0x6347906d, "bio_put" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe864a95a, "module_put" },
	{ 0xffbf874d, "rpc_pipe_generic_upcall" },
	{ 0xe17242bd, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0xba7650f7, "rpc_destroy_pipe_data" },
	{ 0x450c36bc, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x68f721ed, "rpc_put_sb_net" },
	{ 0x16613e84, "pnfs_generic_pg_readpages" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xabd1f91d, "page_cache_next_miss" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x8be73bb6, "pnfs_generic_pg_writepages" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0xec4c2c64, "pnfs_generic_pg_init_read" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x8f9d5a1d, "xdr_inline_decode" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0xf1100eef, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xc0aa1f00, "nfs4_init_deviceid_node" },
	{ 0xbf50a780, "pnfs_set_lo_fail" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x2c56fed4, "xdr_set_scratch_buffer" },
	{ 0xc84ce75e, "flush_dcache_page" },
	{ 0xea25b7ee, "pnfs_ld_read_done" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x50992cef, "try_module_get" },
	{ 0xc91c9a17, "pnfs_register_layoutdriver" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");

