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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xd10ff591, "snd_register_device" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf8f2a4eb, "snd_kill_fasync" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x69c9b564, "snd_device_initialize" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5af762f1, "snd_fasync_free" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xd3385e4f, "snd_device_new" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x83ab94b8, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe864a95a, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x607c184d, "get_device" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x735a8c0, "snd_fasync_helper" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x17c55104, "snd_info_free_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x41e201fb, "snd_info_create_module_entry" },
	{ 0x1dd707be, "snd_info_register" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "snd");

