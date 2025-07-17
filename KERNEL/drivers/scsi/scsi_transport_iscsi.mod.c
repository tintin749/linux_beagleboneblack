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
	{ 0x9580e35e, "transport_class_register" },
	{ 0x501cec73, "class_find_device" },
	{ 0x67f0e816, "bus_register" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x24239d74, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb46b2673, "scsi_host_lookup" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xfe25a832, "dev_printk" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2cd8dc3b, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xca76744a, "attribute_container_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0x41c90efb, "scsi_scan_target" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xf39c10b5, "scsi_is_host_device" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xb96022f3, "device_del" },
	{ 0x8112492b, "device_register" },
	{ 0x5a3cd85f, "scsi_queue_work" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf6a8a4b2, "transport_add_device" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc08c1ad2, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0x2609c429, "netlink_kernel_release" },
	{ 0xa24491bf, "ida_free" },
	{ 0x5969778, "trace_event_reg" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x80841b3b, "attribute_container_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x9da6810, "transport_class_unregister" },
	{ 0xd3949849, "scsi_host_put" },
	{ 0xb4aec65, "init_net" },
	{ 0x929b994a, "__class_register" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe864a95a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcb4e576f, "netlink_capable" },
	{ 0x98509927, "scsi_target_unblock" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xcd35bc0a, "scsi_host_get" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1c9d7c68, "transport_setup_device" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x607c184d, "get_device" },
	{ 0x2c9d3756, "vsnprintf" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x35c3f5f1, "__scsi_init_queue" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0x863f2af5, "device_for_each_child" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe2c0192f, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x15af7f4, "system_state" },
	{ 0xcc32e812, "device_unregister" },
	{ 0x7fbb1518, "transport_remove_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xd8f4acb4, "scsi_target_block" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x75253d39, "bsg_job_done" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0xebcc2646, "bsg_remove_queue" },
	{ 0x18c4784e, "bsg_setup_queue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x50992cef, "try_module_get" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E93178E2815DA0836B6CD74");
