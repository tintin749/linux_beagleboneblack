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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd20bf6ba, "dcookie_unregister" },
	{ 0x467a87d, "__cpuhp_remove_state" },
	{ 0xa7b3181c, "up_read" },
	{ 0xa9e18049, "task_handoff_unregister" },
	{ 0xdd391eff, "profile_event_unregister" },
	{ 0xc385cb58, "perf_num_counters" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2f4113a2, "dcookie_register" },
	{ 0xf353a698, "register_module_notifier" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xb3346646, "perf_event_release_kernel" },
	{ 0x28b115c9, "get_tree_single" },
	{ 0x5cc2a511, "hrtimer_forward" },
	{ 0x6a5ecb18, "unregister_module_notifier" },
	{ 0x5e85415b, "ring_buffer_consume" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0x3061cfce, "ring_buffer_entries_cpu" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x72f9f42, "free_task" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdcd58b6e, "generic_delete_inode" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x37970b69, "dput" },
	{ 0x9d09e8ae, "ring_buffer_event_data" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1696865d, "d_add" },
	{ 0x3fe2959c, "mmput" },
	{ 0x999e8297, "vfree" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x6198dfea, "__ring_buffer_alloc" },
	{ 0x46066e5b, "perf_pmu_name" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xab4718fc, "kill_litter_super" },
	{ 0x6a6d6acc, "default_llseek" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x368772a1, "get_task_mm" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0xca9a1d5e, "ring_buffer_free" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x448b4776, "simple_open" },
	{ 0x9fc791a3, "__cpuhp_setup_state" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7bcf8005, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb4eda0da, "ring_buffer_event_length" },
	{ 0x4c35398e, "find_vma" },
	{ 0xc6cbbc89, "capable" },
	{ 0xaa147d12, "simple_dir_operations" },
	{ 0x7729cbdd, "task_handoff_register" },
	{ 0xfd305341, "walk_stackframe" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xec443298, "get_mm_exe_file" },
	{ 0xd46b54dd, "flush_delayed_work" },
	{ 0xc0a98385, "profile_pc" },
	{ 0x2c81ec75, "__irq_regs" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x37a0cba, "kfree" },
	{ 0x10e914b, "current_time" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xe505998d, "get_dcookie" },
	{ 0xc824bee6, "d_make_root" },
	{ 0x86cfb2b5, "simple_statfs" },
	{ 0x598d92a6, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa389a49a, "profile_event_register" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xec8ed9c9, "perf_event_create_kernel_counter" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xa1b86e22, "new_inode" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x294b9ea1, "on_each_cpu" },
	{ 0x239c20cc, "simple_dir_inode_operations" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x93255b2b, "ring_buffer_lock_reserve" },
	{ 0x42e9d0da, "ring_buffer_unlock_commit" },
};

MODULE_INFO(depends, "");

