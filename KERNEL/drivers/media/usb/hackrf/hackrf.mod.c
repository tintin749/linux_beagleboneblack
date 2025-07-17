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
	{ 0x618727d6, "param_ops_bool" },
	{ 0xe0ccb948, "v4l2_event_unsubscribe" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0xecdf0f03, "v4l2_ctrl_log_status" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0x39662414, "vb2_ioctl_prepare_buf" },
	{ 0x908b1a57, "vb2_ioctl_create_bufs" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0x999412e6, "vb2_ioctl_expbuf" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x83189a47, "vb2_ioctl_reqbufs" },
	{ 0xf3ce893c, "vb2_fop_release" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0x86cce08a, "vb2_fop_write" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x4fc32bcf, "__v4l2_ctrl_grab" },
	{ 0x39fec97, "v4l2_ctrl_auto_cluster" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x19dee3cf, "vb2_queue_init" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9d669763, "memcpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xeea0399, "strscpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x9b944008, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1D50p6089d*dc*dsc*dp*ic*isc*ip*in*");
