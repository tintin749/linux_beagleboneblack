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
	{ 0x12702392, "em28xx_read_reg" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xb57a311a, "media_device_unregister_entity" },
	{ 0x2578e1ac, "v4l2_i2c_new_subdev" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0xb5be5e84, "em28xx_write_regs" },
	{ 0xf5cf2925, "v4l2_ctrl_notify" },
	{ 0xddbc63b2, "em28xx_setup_xc3028" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x7fc8652c, "em28xx_tuner_callback" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0xbfbeacaf, "v4l2_mc_create_media_graph" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0x9f696d10, "em28xx_init_usb_xfer" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x83939bea, "em28xx_register_extension" },
	{ 0xeea0399, "strscpy" },
	{ 0x42e071c2, "media_entity_setup_link" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0x57295083, "em28xx_unregister_extension" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x39662414, "vb2_ioctl_prepare_buf" },
	{ 0x630ab6ac, "em28xx_uninit_usb_xfer" },
	{ 0x908b1a57, "vb2_ioctl_create_bufs" },
	{ 0x91452968, "_dev_err" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7a09f1c3, "media_device_register_entity" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x1c252dec, "v4l2_ctrl_find" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf3ce893c, "vb2_fop_release" },
	{ 0x9b944008, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xab29389b, "em28xx_audio_setup" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0xe7ddaf46, "v4l2_i2c_subdev_addr" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x7f8eda75, "em28xx_set_mode" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0x2cfe0ec0, "em28xx_stop_urbs" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x712a1276, "em28xx_write_reg" },
	{ 0xef1cde24, "em28xx_audio_analog_set" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xeab3a554, "em28xx_init_camera" },
	{ 0x19dee3cf, "vb2_queue_init" },
};

MODULE_INFO(depends, "em28xx");


MODULE_INFO(srcversion, "67196A2C3CB48CA8AEA9C5A");
