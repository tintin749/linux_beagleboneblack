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
	{ 0x760e56a5, "register_virtio_driver" },
	{ 0x20496c04, "input_free_device" },
	{ 0x47c19580, "input_register_device" },
	{ 0xd2117ff, "input_alloc_absinfo" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x9c17b27b, "virtqueue_get_vring_size" },
	{ 0x8462dabb, "virtqueue_add_outbuf" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xeac16fb4, "virtqueue_detach_unused_buf" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x94aa83e2, "virtqueue_add_inbuf" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xf144f336, "input_event" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000012v*");
