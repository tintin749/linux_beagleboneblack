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
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xe14da0d6, "dm_io" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd2e0f71a, "bio_add_page" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x32430023, "_totalhigh_pages" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x6347906d, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe17242bd, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xfdf58216, "unregister_shrinker" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x64d03ddd, "register_shrinker" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x63727adc, "param_ops_ulong" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2fc27962, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");

