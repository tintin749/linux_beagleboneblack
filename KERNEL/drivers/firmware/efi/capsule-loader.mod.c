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
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xfbaecf3c, "misc_deregister" },
	{ 0xe6d42467, "misc_register" },
	{ 0xcce8bc18, "efi" },
	{ 0x94961283, "vunmap" },
	{ 0x93d4919, "vmap" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0x43145f74, "page_address" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x65284995, "efi_capsule_update" },
	{ 0x6fb193c1, "kunmap_high" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe69159f3, "kmap_high" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x72b299e1, "efi_capsule_supported" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "");

