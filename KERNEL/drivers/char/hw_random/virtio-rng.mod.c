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
	{ 0x5f754e5a, "memset" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xda8cc3b9, "hwrng_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xa24491bf, "ida_free" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x94aa83e2, "virtqueue_add_inbuf" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x81c5544e, "wait_for_completion_killable" },
	{ 0xc37335b0, "complete" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc9aa1203, "hwrng_register" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000004v*");
