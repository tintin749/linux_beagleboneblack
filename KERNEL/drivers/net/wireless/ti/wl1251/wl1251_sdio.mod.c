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
	{ 0x9313749f, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x2736e291, "ieee80211_queue_work" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0xb2444eb2, "wl1251_free_hw" },
	{ 0xe5ee6b6a, "of_irq_get" },
	{ 0x474eeaf, "sdio_writeb_readb" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xc5850110, "printk" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x13243d4b, "wl1251_get_platform_data" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x8d55711b, "wl1251_init_ieee80211" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x459253a9, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0xe2393dc3, "sdio_memcpy_fromio" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0xd984f93, "wl1251_alloc_hw" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b32fd4d, "sdio_release_host" },
};

MODULE_INFO(depends, "mac80211,wl1251");

MODULE_ALIAS("sdio:c*v104Cd9066*");
