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
	{ 0xf9a482f9, "msleep" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x6dc410bb, "v4l2_event_queue" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0x46307e74, "snd_pcm_period_elapsed" },
	{ 0xb472f54c, "v4l2_subdev_call_wrappers" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0xb7abcce3, "v4l2_ctrl_g_ctrl" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xda543061, "snd_card_disconnect" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x67f2d4ed, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0x30bd072b, "snd_pcm_set_managed_buffer_all" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0xd3385e4f, "snd_device_new" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0x1f0745f2, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x1dd8271a, "snd_pcm_set_ops" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0xae710e95, "snd_card_free_when_closed" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x349cb25, "v4l2_ctrl_new_custom" },
	{ 0x91452968, "_dev_err" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0x4fc32bcf, "__v4l2_ctrl_grab" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xcf0b2ca1, "snd_card_new" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf3ce893c, "vb2_fop_release" },
	{ 0x9b944008, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0x738664c0, "snd_card_free" },
	{ 0x62ffada0, "v4l2_i2c_new_subdev_board" },
	{ 0x39eacf8, "snd_card_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2fe14100, "snd_pcm_new" },
	{ 0x99bb8806, "memmove" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x19dee3cf, "vb2_queue_init" },
};

MODULE_INFO(depends, "snd-pcm,snd");

