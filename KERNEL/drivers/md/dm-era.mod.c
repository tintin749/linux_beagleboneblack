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
	{ 0x55f98e63, "dm_tm_open_with_sm" },
	{ 0x87c934be, "dm_tm_inc" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x49081644, "dm_btree_remove" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0x23ebd5fb, "dm_bitset_set_bit" },
	{ 0x79bd15d4, "blk_limits_io_opt" },
	{ 0x688d422d, "dm_bm_block_size" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x88295b96, "dm_tm_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x72d6a8e3, "blk_limits_io_min" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x63b0c22d, "dm_bitset_flush" },
	{ 0x2417c5c4, "dm_btree_empty" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x97263968, "dm_bitset_resize" },
	{ 0x36b84cda, "dm_array_del" },
	{ 0x5f754e5a, "memset" },
	{ 0xe07f91e3, "dm_set_target_max_io_len" },
	{ 0xf3e25192, "dm_bm_checksum" },
	{ 0xa2ea5542, "dm_bitset_del" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0x9e98460e, "dm_bitset_empty" },
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x48d1c7dc, "dm_btree_find_lowest_key" },
	{ 0xb36102c, "dm_array_empty" },
	{ 0xa433adbc, "dm_bm_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4557b425, "dm_bitset_test_bit" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x16af9071, "dm_array_set_value" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0x7485935a, "dm_btree_lookup" },
	{ 0xc248bde2, "dm_disk_bitset_init" },
	{ 0x29c25d50, "dm_bm_write_lock_zero" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb25f6bc, "dm_array_resize" },
	{ 0xd6367ed7, "dm_tm_create_with_sm" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x46af8087, "dm_bm_read_lock" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0x37a0cba, "kfree" },
	{ 0x64976f82, "dm_tm_shadow_block" },
	{ 0x9d669763, "memcpy" },
	{ 0x3a797d19, "dm_btree_del" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xd5d42848, "dm_block_manager_create" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0x8a56150c, "dm_tm_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6af8a872, "dm_array_info_init" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xe198232, "dm_btree_insert" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-persistent-data,dm-mod");

