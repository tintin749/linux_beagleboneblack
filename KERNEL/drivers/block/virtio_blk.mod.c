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
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x760e56a5, "register_virtio_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x91452968, "_dev_err" },
	{ 0x1c0eb8cb, "set_disk_ro" },
	{ 0x99bb8806, "memmove" },
	{ 0x8dc8661f, "blk_queue_physical_block_size" },
	{ 0xc2d610f1, "blk_queue_alignment_offset" },
	{ 0x44a9055e, "blk_queue_io_min" },
	{ 0x5b18b009, "blk_queue_io_opt" },
	{ 0xda133b69, "device_add_disk" },
	{ 0x3004a13, "blk_queue_max_write_zeroes_sectors" },
	{ 0x332c0bfc, "blk_queue_flag_set" },
	{ 0xd7438a5f, "blk_queue_max_discard_segments" },
	{ 0xaf69af29, "blk_queue_max_discard_sectors" },
	{ 0x9332a79, "blk_queue_logical_block_size" },
	{ 0xe2766358, "blk_queue_max_segment_size" },
	{ 0xd2d67eb2, "virtio_max_dma_size" },
	{ 0xd5229dc5, "blk_queue_max_hw_sectors" },
	{ 0x73b05a52, "blk_queue_max_segments" },
	{ 0x6dc9d72a, "blk_mq_init_queue" },
	{ 0x61bec516, "blk_mq_alloc_tag_set" },
	{ 0xd6561dd9, "__alloc_disk_node" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0x6e2b158f, "blk_mq_unquiesce_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0x8424effe, "blk_mq_stop_hw_queue" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x1737b345, "virtqueue_add_sgs" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x7e0a1319, "__blk_rq_map_sg" },
	{ 0xd2c02709, "blk_mq_start_request" },
	{ 0xe2fe13c9, "revalidate_disk_size" },
	{ 0x69abb23b, "blk_queue_write_cache" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xd6ec2a1d, "virtio_check_driver_offered_feature" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x79e7a6b4, "set_capacity_revalidate_and_notify" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0x48a91171, "string_get_size" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf4570e18, "put_disk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6ce291de, "blk_mq_free_tag_set" },
	{ 0xce6003f1, "blk_cleanup_queue" },
	{ 0xd7d32d70, "del_gendisk" },
	{ 0xa24491bf, "ida_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x3ce94527, "blk_execute_rq" },
	{ 0x97255bdf, "strlen" },
	{ 0xb3156011, "blk_put_request" },
	{ 0x76d0e3ca, "blk_rq_map_kern" },
	{ 0x7d863613, "blk_get_request" },
	{ 0x57822f50, "virtqueue_notify" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x4cc1b1b2, "virtqueue_kick_prepare" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x43145f74, "page_address" },
	{ 0x1ff41d56, "blk_mq_end_request" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x3f790cc2, "blk_mq_virtio_map_queues" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3bff29e, "blk_mq_quiesce_queue" },
	{ 0x92b57248, "flush_work" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x17f8c713, "blk_mq_start_stopped_hw_queues" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x6084bbef, "virtqueue_enable_cb" },
	{ 0xa81d390b, "virtqueue_is_broken" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0x6b720aa2, "blk_mq_complete_request" },
	{ 0xcf707a05, "virtqueue_disable_cb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000002v*");
