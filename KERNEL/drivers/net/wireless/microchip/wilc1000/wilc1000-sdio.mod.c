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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x9313749f, "sdio_writeb" },
	{ 0x76dfdc17, "sdio_readb" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x460e3595, "wilc_netdev_cleanup" },
	{ 0x76f4c683, "wilc_handle_isr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xc1caae3f, "chip_wakeup" },
	{ 0x8d859f2f, "chip_allow_sleep" },
	{ 0x91452968, "_dev_err" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xa7b28661, "wilc_cfg80211_init" },
	{ 0xb6c33e0b, "host_wakeup_notify" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa8059877, "host_sleep_notify" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x459253a9, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0xe2393dc3, "sdio_memcpy_fromio" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x2b32fd4d, "sdio_release_host" },
};

MODULE_INFO(depends, "wilc1000");

MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000");
MODULE_ALIAS("of:N*T*Cmicrochip,wilc1000C*");
MODULE_ALIAS("sdio:c*v0296d5347*");
