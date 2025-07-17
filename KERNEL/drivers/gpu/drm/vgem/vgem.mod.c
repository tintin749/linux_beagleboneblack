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
	{ 0xc134d1f3, "drm_release" },
	{ 0x170b3e82, "drm_prime_gem_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x97816cbd, "drm_dev_register" },
	{ 0x4e672d77, "drm_gem_put_pages" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x17a0e5a6, "dma_resv_test_signaled_rcu" },
	{ 0xeb27c785, "dma_set_mask" },
	{ 0xa7b48f6e, "drm_gem_prime_import_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x246790df, "idr_for_each" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xed650883, "__devm_drm_dev_alloc" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x3ea0de64, "drm_dev_unregister" },
	{ 0xafbcf27b, "drm_prime_pages_to_sg" },
	{ 0x3f62d048, "dma_fence_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x8c05a31f, "dma_resv_add_shared_fence" },
	{ 0x930ca816, "drm_gem_handle_create" },
	{ 0x93d4919, "vmap" },
	{ 0x77d92a63, "devres_open_group" },
	{ 0xc5cd290b, "shmem_read_mapping_page_gfp" },
	{ 0x7d19230, "ww_mutex_lock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x810de59d, "drm_gem_object_release" },
	{ 0x257ae45c, "dma_fence_free" },
	{ 0xc1779092, "drm_read" },
	{ 0x50fd6103, "dma_fence_signal" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0x7bcf8005, "fput" },
	{ 0x43e438d3, "drm_gem_vm_open" },
	{ 0x487ee48f, "drm_gem_vm_close" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x7de129b, "drm_gem_prime_fd_to_handle" },
	{ 0x1679b0fa, "drm_ioctl" },
	{ 0x9e2b488a, "drm_gem_mmap" },
	{ 0xea290d6b, "drm_clflush_pages" },
	{ 0x4cf9594d, "dma_resv_reserve_shared" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecb44d8, "drm_gem_object_lookup" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xdac67d69, "drm_gem_prime_handle_to_fd" },
	{ 0x4898e189, "drm_gem_object_init" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x95c8883a, "ww_mutex_unlock" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb0f8a1fb, "vm_get_page_prot" },
	{ 0xa1c0fbb, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x219132ab, "drm_gem_get_pages" },
	{ 0x3517736b, "devres_release_group" },
	{ 0x9edbc622, "dma_resv_add_excl_fence" },
	{ 0x190f604f, "drm_poll" },
	{ 0xb2181b28, "drm_open" },
};

MODULE_INFO(depends, "");

