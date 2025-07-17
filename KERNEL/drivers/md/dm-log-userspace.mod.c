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
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x99d62744, "cn_add_callback" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x97255bdf, "strlen" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0x9754410f, "dm_dirty_log_type_unregister" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x28e50ea6, "dm_table_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x328a05f1, "strncpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc4d03b4c, "dm_dirty_log_type_register" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x794765d1, "mempool_free" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "dm-mod,dm-log");

