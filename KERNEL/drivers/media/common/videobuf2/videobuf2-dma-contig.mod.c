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
	{ 0xfa07c9d3, "dma_map_sg_attrs" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0xaa071f64, "dma_unmap_sg_attrs" },
	{ 0x5d22be40, "dma_get_sgtable_attrs" },
	{ 0xdee66ce1, "dma_mmap_attrs" },
	{ 0xd86bcf1c, "dma_buf_detach" },
	{ 0x44ac8475, "dma_map_resource" },
	{ 0xcfcfe34f, "set_page_dirty_lock" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xfffa3100, "sg_next" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf82c8787, "dma_free_attrs" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xbc81b3d7, "dma_buf_vunmap" },
	{ 0xfb817353, "dma_sync_sg_for_device" },
	{ 0xc5850110, "printk" },
	{ 0xa032ffc7, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa52a060d, "dma_buf_unmap_attachment" },
	{ 0x91452968, "_dev_err" },
	{ 0xa5afb676, "sg_alloc_table" },
	{ 0x121b860, "dma_buf_map_attachment" },
	{ 0x2ee08b06, "dma_buf_export" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x97b7bd3a, "dma_buf_attach" },
	{ 0x607c184d, "get_device" },
	{ 0xaff9863b, "dma_unmap_resource" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xb79cf954, "vb2_common_vm_ops" },
	{ 0xc7e7eaa1, "dma_sync_sg_for_cpu" },
	{ 0xc614760f, "sg_alloc_table_from_pages" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x9eb31294, "dma_buf_vmap" },
};

MODULE_INFO(depends, "");

