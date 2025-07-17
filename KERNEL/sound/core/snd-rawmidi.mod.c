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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x307487c5, "put_pid" },
	{ 0xd10ff591, "snd_register_device" },
	{ 0x7123bca9, "snd_device_register" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x5d20f29e, "snd_card_file_remove" },
	{ 0x46190904, "pid_vnr" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x69c9b564, "snd_device_initialize" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xf8de3908, "snd_info_create_card_entry" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x51122c29, "snd_ctl_unregister_ioctl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xd3385e4f, "snd_device_new" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x83ab94b8, "snd_unregister_device" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xe864a95a, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7625224f, "snd_card_file_add" },
	{ 0x67047ab2, "snd_ctl_register_ioctl" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xb79d4a1a, "snd_register_oss_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1df57d42, "snd_unregister_oss_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x17c55104, "snd_info_free_entry" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x49970de8, "finish_wait" },
	{ 0xe9416755, "snd_ctl_get_preferred_subdevice" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa37fbe83, "snd_seq_device_new" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x1dd707be, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-seq-device");

