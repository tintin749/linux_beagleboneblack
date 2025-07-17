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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x997f5f22, "virtqueue_get_used_addr" },
	{ 0x7eefa218, "virtqueue_get_avail_addr" },
	{ 0xf784f52d, "virtqueue_get_desc_addr" },
	{ 0x9c17b27b, "virtqueue_get_vring_size" },
	{ 0xb80abc52, "vring_create_virtqueue" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x18eff17e, "register_virtio_device" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xeb27c785, "dma_set_mask" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0x77f1d38, "virtio_config_changed" },
	{ 0xff05fa13, "vring_interrupt" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xb0b9cbb8, "vring_del_virtqueue" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x91452968, "_dev_err" },
	{ 0x47b189cc, "vring_transport_features" },
	{ 0x32157aa3, "unregister_virtio_device" },
	{ 0xfcf6f09a, "virtio_device_freeze" },
	{ 0xf80f84f2, "virtio_device_restore" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cvirtio,mmio");
MODULE_ALIAS("of:N*T*Cvirtio,mmioC*");
