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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x7568528f, "iio_channel_release_all" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0x2015899d, "iio_buffer_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcfd7a30c, "iio_update_buffers" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x199d0f79, "iio_channel_get_all" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x17e421f5, "iio_buffer_put" },
};

MODULE_INFO(depends, "");

