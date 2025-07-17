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
	{ 0x5cf47c1a, "__blk_mq_end_request" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xce6003f1, "blk_cleanup_queue" },
	{ 0x43145f74, "page_address" },
	{ 0x771838b8, "mtd_table_mutex" },
	{ 0x84504f5f, "rq_flush_dcache_pages" },
	{ 0xd2c02709, "blk_mq_start_request" },
	{ 0xfd537d98, "blk_mq_unfreeze_queue" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x854bd351, "__put_mtd_device" },
	{ 0xbbc3c31d, "blk_mq_freeze_queue" },
	{ 0xa18922c3, "__get_mtd_device" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xd6561dd9, "__alloc_disk_node" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xaf69af29, "blk_queue_max_discard_sectors" },
	{ 0xd7d32d70, "del_gendisk" },
	{ 0x6ce291de, "blk_mq_free_tag_set" },
	{ 0xbaa5bf4b, "register_mtd_user" },
	{ 0xcba2d09f, "__mtd_next_device" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6fb193c1, "kunmap_high" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x1e27eb8e, "unregister_mtd_user" },
	{ 0x67359e49, "blk_update_request" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xe864a95a, "module_put" },
	{ 0x5e1713ed, "blk_queue_flag_clear" },
	{ 0xe3068ad1, "blk_mq_init_sq_queue" },
	{ 0x332c0bfc, "blk_queue_flag_set" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xf4570e18, "put_disk" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x69abb23b, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3bff29e, "blk_mq_quiesce_queue" },
	{ 0x6e2b158f, "blk_mq_unquiesce_queue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xda133b69, "device_add_disk" },
	{ 0xe69159f3, "kmap_high" },
	{ 0x9332a79, "blk_queue_logical_block_size" },
	{ 0x1c0eb8cb, "set_disk_ro" },
};

MODULE_INFO(depends, "");

