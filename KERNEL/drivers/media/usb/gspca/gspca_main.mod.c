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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0xb7abcce3, "v4l2_ctrl_g_ctrl" },
	{ 0xf8ba135e, "vb2_fop_poll" },
	{ 0x15fe2727, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x690f5c83, "vb2_ops_wait_prepare" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0x292eda2c, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x9902648f, "vb2_vmalloc_memops" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf808b8f7, "vb2_fop_mmap" },
	{ 0xedee0ad8, "vb2_ioctl_qbuf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x57fdbc3a, "v4l2_ctrl_subscribe_event" },
	{ 0x41216855, "vb2_plane_vaddr" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x908b1a57, "vb2_ioctl_create_bufs" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0xd28a27a8, "vb2_ioctl_dqbuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5b316d2a, "__v4l2_ctrl_s_ctrl" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf3ce893c, "vb2_fop_release" },
	{ 0xd3aa01c6, "vb2_queue_error" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0x20496c04, "input_free_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0x4c189804, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x30727247, "vb2_ops_wait_finish" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x999412e6, "vb2_ioctl_expbuf" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x359a8bca, "vb2_ioctl_streamoff" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0x19dee3cf, "vb2_queue_init" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "143F432372A05CDEB2F420B");
