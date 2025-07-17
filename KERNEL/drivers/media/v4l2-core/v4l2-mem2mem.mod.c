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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xb57a311a, "media_device_unregister_entity" },
	{ 0x9ca6d9be, "vb2_mmap" },
	{ 0x30356e77, "media_devnode_create" },
	{ 0xa819e7a4, "vb2_create_bufs" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd417b371, "vb2_request_object_is_buffer" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x41b3277e, "media_remove_intf_links" },
	{ 0xaebfc434, "vb2_prepare_buf" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x7199dbd, "v4l2_event_pending" },
	{ 0x220c4bfc, "vb2_buffer_done" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x60795c09, "vb2_qbuf" },
	{ 0x3526957d, "vb2_querybuf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7a09f1c3, "media_device_register_entity" },
	{ 0x35f83939, "vb2_streamon" },
	{ 0x9b944008, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x69c2e41, "vb2_expbuf" },
	{ 0x1000e51, "schedule" },
	{ 0x7c65d38d, "media_create_pad_link" },
	{ 0x4557db1c, "vb2_reqbufs" },
	{ 0xfedf131d, "media_entity_remove_links" },
	{ 0xec4fb1e7, "media_create_intf_link" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xe1d6a245, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x43f7f785, "vb2_queue_release" },
	{ 0x7c0a7bf8, "vb2_streamoff" },
	{ 0xce4788ed, "media_devnode_remove" },
};

MODULE_INFO(depends, "");

