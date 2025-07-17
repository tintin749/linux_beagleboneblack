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
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x3ee6925, "submit_bio_noacct" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x65c1889, "dm_bio_from_per_bio_data" },
	{ 0xc5850110, "printk" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0x70326f42, "dm_per_bio_data" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "dm-mod");

