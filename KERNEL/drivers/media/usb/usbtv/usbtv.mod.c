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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0x8f72d515, "_snd_pcm_stream_lock_irqsave" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd803cf53, "snd_pcm_stream_unlock_irqrestore" },
	{ 0x39662414, "vb2_ioctl_prepare_buf" },
	{ 0x908b1a57, "vb2_ioctl_create_bufs" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xf3ce893c, "vb2_fop_release" },
	{ 0x9b944008, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0x706fae94, "vb2_video_unregister_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x19dee3cf, "vb2_queue_init" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3306d*dc*dsc*dp*ic*isc*ip*in*");
