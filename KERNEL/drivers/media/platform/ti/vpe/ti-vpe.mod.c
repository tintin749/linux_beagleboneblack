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
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0x1de05da7, "v4l2_m2m_ioctl_dqbuf" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xcb3e7a13, "vpdma_set_line_mode" },
	{ 0xe3298a0f, "vpdma_create" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0x9f77402, "sc_dump_regs" },
	{ 0x431bcafe, "vpdma_set_bg_color" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xdd96c4f0, "vpdma_submit_descs" },
	{ 0xa3a4e108, "csc_set_coeff" },
	{ 0xfac6d339, "v4l2_m2m_ctx_init" },
	{ 0xdd7f11d3, "vpdma_add_out_dtd" },
	{ 0xeb27c785, "dma_set_mask" },
	{ 0x97f311f0, "vpdma_add_cfd_block" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x373fb5e9, "vpdma_clear_list_stat" },
	{ 0x2c1713fb, "v4l2_m2m_fop_mmap" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xf82c8787, "dma_free_attrs" },
	{ 0xeea0399, "strscpy" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x4bbfe4d4, "v4l2_m2m_ioctl_streamon" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf93ba9bf, "vpdma_reset_desc_list" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x117069af, "v4l2_m2m_ioctl_streamoff" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc75580b7, "vpdma_set_max_size" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0xa7621326, "v4l2_m2m_ioctl_reqbufs" },
	{ 0x177517b4, "v4l2_fh_init" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0x5118bd7d, "vpdma_add_sync_on_channel_ctd" },
	{ 0x664dd09f, "vpdma_alloc_desc_buf" },
	{ 0x65d23377, "vpdma_add_in_dtd" },
	{ 0x163e1a86, "vpdma_free_desc_buf" },
	{ 0xa032ffc7, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x349cb25, "v4l2_ctrl_new_custom" },
	{ 0x91452968, "_dev_err" },
	{ 0xab787ee4, "sc_config_scaler" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xb4b66776, "vb2_plane_cookie" },
	{ 0x380a2d39, "v4l2_m2m_get_vq" },
	{ 0x5277aa3e, "vpdma_enable_list_complete_irq" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x87c0415e, "vpdma_free_desc_list" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x3d019cee, "v4l2_m2m_ioctl_qbuf" },
	{ 0x9820feaa, "sc_create" },
	{ 0x439a60cc, "vpdma_set_frame_start_event" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4fb15c61, "v4l2_m2m_fop_poll" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xeceaeea7, "v4l2_m2m_buf_queue" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x49293b26, "vpdma_yuv_fmts" },
	{ 0x901b2014, "sc_set_hs_coeffs" },
	{ 0x50ec40af, "vpdma_rgb_fmts" },
	{ 0x3ff3c6cc, "v4l2_m2m_ioctl_querybuf" },
	{ 0x174cc018, "vpdma_dump_regs" },
	{ 0xc84dbc8f, "vpdma_map_desc_buf" },
	{ 0xa30539a1, "v4l2_m2m_ioctl_expbuf" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x19adb992, "csc_create" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x16f0b6e4, "vpdma_add_cfd_adb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe5c342e0, "sc_set_vs_coeffs" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5c4020f2, "vpdma_unmap_desc_buf" },
	{ 0x32c756d9, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x81123cd3, "devm_ioremap" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x7270b983, "csc_dump_regs" },
	{ 0x52276e87, "v4l2_m2m_buf_remove" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0x3e582c15, "v4l2_fh_add" },
	{ 0xdde1735, "v4l2_m2m_ctx_release" },
	{ 0xea8e69f7, "v4l2_fh_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x3bb6047d, "vpdma_create_desc_list" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xbc3e082f, "v4l2_m2m_next_buf" },
	{ 0x1e26321d, "vpdma_misc_fmts" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x4c8c5f76, "v4l2_m2m_job_finish" },
	{ 0x9a17275b, "v4l2_fh_exit" },
	{ 0x19dee3cf, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "v4l2-mem2mem,ti-vpdma,ti-sc,ti-csc,videobuf2-dma-contig");

MODULE_ALIAS("of:N*T*Cti,dra7-vpe");
MODULE_ALIAS("of:N*T*Cti,dra7-vpeC*");
