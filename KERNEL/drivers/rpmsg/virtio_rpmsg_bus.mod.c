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
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0xc5850110, "printk" },
	{ 0x760e56a5, "register_virtio_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8462dabb, "virtqueue_add_outbuf" },
	{ 0x9d669763, "memcpy" },
	{ 0x6084bbef, "virtqueue_enable_cb" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x47925794, "idr_find" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x863f2af5, "device_for_each_child" },
	{ 0xa346975c, "idr_remove" },
	{ 0xf82c8787, "dma_free_attrs" },
	{ 0x57822f50, "virtqueue_notify" },
	{ 0x4cc1b1b2, "virtqueue_kick_prepare" },
	{ 0xcf707a05, "virtqueue_disable_cb" },
	{ 0x94aa83e2, "virtqueue_add_inbuf" },
	{ 0xa032ffc7, "dma_alloc_attrs" },
	{ 0x9c17b27b, "virtqueue_get_vring_size" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1c0c19a8, "rpmsg_sendto" },
	{ 0xd6ec2a1d, "virtio_check_driver_offered_feature" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x8eb14d86, "rpmsg_register_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc08c1ad2, "device_find_child" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x83d84f74, "rpmsg_find_device" },
	{ 0xa0980ae2, "rpmsg_unregister_device" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x91452968, "_dev_err" },
	{ 0x328a05f1, "strncpy" },
	{ 0xf2fbfa46, "vmalloc_to_page" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x84b183ae, "strncmp" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xcc32e812, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "rpmsg_core");

MODULE_ALIAS("virtio:d00000007v*");
