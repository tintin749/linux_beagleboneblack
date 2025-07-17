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
	{ 0x83189a47, "vb2_ioctl_reqbufs" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xfdf4170c, "usb_altnum_to_altsetting" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x97255bdf, "strlen" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0xf144f336, "input_event" },
	{ 0x67f2d4ed, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0x984c7929, "dma_sync_single_for_cpu" },
	{ 0x45158076, "usb_string" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0x5969778, "trace_event_reg" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x349cb25, "v4l2_ctrl_new_custom" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf3ce893c, "vb2_fop_release" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x12c329e, "dma_map_page_attrs" },
	{ 0x20496c04, "input_free_device" },
	{ 0x32d43420, "v4l2_ctrl_get_name" },
	{ 0x39fec97, "v4l2_ctrl_auto_cluster" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x9d832a70, "dma_sync_single_for_device" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0x4676ae5a, "dma_unmap_page_attrs" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe914e41e, "strcpy" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0x19dee3cf, "vb2_queue_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p032Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8F140DB0CAB2359BFDBF823");
