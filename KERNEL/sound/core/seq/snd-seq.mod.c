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
	{ 0x307487c5, "put_pid" },
	{ 0xa7b3181c, "up_read" },
	{ 0xd10ff591, "snd_register_device" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x46190904, "pid_vnr" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x69c9b564, "snd_device_initialize" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0x3ed68780, "snd_timer_instance_free" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0x5f754e5a, "memset" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0xf65b7a0c, "snd_timer_instance_new" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x83ab94b8, "snd_unregister_device" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc0c63cd4, "snd_timer_pause" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xaa0cfc3a, "snd_timer_resolution" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xe864a95a, "module_put" },
	{ 0x5607b7d3, "snd_timer_start" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb014ce9, "snd_timer_open" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x2c9d3756, "vsnprintf" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7b097dea, "snd_timer_close" },
	{ 0xad17126b, "snd_seq_root" },
	{ 0x17c55104, "snd_info_free_entry" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x41e201fb, "snd_info_create_module_entry" },
	{ 0x1dd707be, "snd_info_register" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device,snd-timer");

