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
	{ 0xd8e5296, "kmap_to_page" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97255bdf, "strlen" },
	{ 0xa9fcb5ee, "p9_client_cb" },
	{ 0xdb2fcd0a, "v9fs_unregister_trans" },
	{ 0x11c6fe1d, "iov_iter_get_pages_alloc" },
	{ 0xb74ddb51, "kobject_uevent" },
	{ 0xd6ec2a1d, "virtio_check_driver_offered_feature" },
	{ 0xb5df5926, "v9fs_register_trans" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x585dd232, "_dev_emerg" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x1737b345, "virtqueue_add_sgs" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2b480270, "p9_release_pages" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0x39f5802, "sysfs_remove_file_ns" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa3681163, "iov_iter_advance" },
	{ 0x49970de8, "finish_wait" },
	{ 0x895885b8, "iov_iter_single_seg_count" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0x7e1c4af9, "sysfs_create_file_ns" },
	{ 0x27fa66e1, "nr_free_buffer_pages" },
	{ 0x4c1c47a1, "p9_req_put" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x760e56a5, "register_virtio_driver" },
};

MODULE_INFO(depends, "9pnet");

MODULE_ALIAS("virtio:d00000009v*");
