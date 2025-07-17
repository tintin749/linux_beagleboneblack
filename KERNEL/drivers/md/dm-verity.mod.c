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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa7b3181c, "up_read" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x97255bdf, "strlen" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0x43145f74, "page_address" },
	{ 0x9dad115, "key_type_user" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0x1cc06cc1, "dm_table_get_md" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0x38bc4530, "request_key_tag" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x4863044b, "dm_disk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x72d6a8e3, "blk_limits_io_min" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xccbdac7f, "crypto_ahash_final" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5f754e5a, "memset" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x3344eafd, "kmap_atomic_high_prot" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71c90087, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0xa52c0a6e, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa95cc82b, "crypto_req_done" },
	{ 0xab2cfe74, "bio_endio" },
	{ 0x85e6ff89, "kobject_uevent_env" },
	{ 0x1e8094d9, "key_put" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x48bf69f3, "crypto_destroy_tfm" },
	{ 0x6f83fba8, "hex2bin" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x65c1889, "dm_bio_from_per_bio_data" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x70326f42, "dm_per_bio_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x8d7d4b68, "verify_pkcs7_signature" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x3a46dcf8, "crypto_alloc_ahash" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-bufio,dm-mod");

