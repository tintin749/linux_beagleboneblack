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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x1a4af81b, "sg_nents" },
	{ 0xa7a920c0, "crypto_transfer_skcipher_request_to_engine" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x611cc97f, "crypto_engine_alloc_init" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xfffa3100, "sg_next" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfac91659, "virtio_break_device" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x1737b345, "virtqueue_add_sgs" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0x21c119ef, "crypto_unregister_skcipher" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xc62f7f63, "crypto_engine_start" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0xcf707a05, "virtqueue_disable_cb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd96568e2, "cpu_bit_bitmap" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x91452968, "_dev_err" },
	{ 0x6d18f09a, "crypto_register_skcipher" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0xe864a95a, "module_put" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xf06c8fc5, "crypto_engine_exit" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0xc2343414, "crypto_finalize_skcipher_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xa81d390b, "virtqueue_is_broken" },
	{ 0xeac16fb4, "virtqueue_detach_unused_buf" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x6084bbef, "virtqueue_enable_cb" },
	{ 0x50992cef, "try_module_get" },
	{ 0x760e56a5, "register_virtio_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000014v*");
