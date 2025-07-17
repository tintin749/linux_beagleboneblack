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
	{ 0x65a3a78f, "iio_dma_buffer_enable" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xd85f5971, "iio_dma_buffer_init" },
	{ 0x4927fe64, "iio_dma_buffer_disable" },
	{ 0xbfff9fd6, "iio_dma_buffer_set_bytes_per_datum" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0xfed19014, "dma_request_chan" },
	{ 0x29c74d1a, "iio_dma_buffer_set_length" },
	{ 0x226cffb3, "iio_dma_buffer_release" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3766e315, "iio_dma_buffer_request_update" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x10cbb59c, "iio_dma_buffer_block_done" },
	{ 0xc0110b55, "iio_dma_buffer_block_list_abort" },
	{ 0x55c4f666, "dma_get_slave_caps" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc9961014, "iio_dma_buffer_read" },
	{ 0xc616a3e6, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd2022c1, "iio_buffer_set_attrs" },
	{ 0x113ea81, "iio_dma_buffer_exit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x17e421f5, "iio_buffer_put" },
	{ 0xe94e022c, "iio_dma_buffer_data_available" },
};

MODULE_INFO(depends, "industrialio-buffer-dma");

