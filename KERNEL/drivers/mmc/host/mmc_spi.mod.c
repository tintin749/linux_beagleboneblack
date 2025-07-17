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
	{ 0x2a2d2fdb, "mmc_gpio_get_cd" },
	{ 0x41c16632, "mmc_gpio_get_ro" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x6eaf9fa3, "mmc_request_done" },
	{ 0x3a66a4a7, "spi_bus_unlock" },
	{ 0x43145f74, "page_address" },
	{ 0xa2048e95, "crc_itu_t" },
	{ 0xfffa3100, "sg_next" },
	{ 0x6fb193c1, "kunmap_high" },
	{ 0x5714cd35, "flush_kernel_dcache_page" },
	{ 0xe69159f3, "kmap_high" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xd5adecf7, "spi_bus_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x91452968, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0x5c475fa6, "mmc_gpiod_request_cd_irq" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x83322f1b, "mmc_gpiod_request_ro" },
	{ 0x616511a2, "mmc_gpiod_request_cd" },
	{ 0x51ee8a5d, "mmc_add_host" },
	{ 0x12c329e, "dma_map_page_attrs" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x4b272904, "mmc_spi_get_pdata" },
	{ 0x86c00727, "mmc_alloc_host" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x1000e51, "schedule" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0xabc7e05a, "mmc_spi_put_pdata" },
	{ 0xfda41262, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x4676ae5a, "dma_unmap_page_attrs" },
	{ 0x7fa37630, "mmc_remove_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x984c7929, "dma_sync_single_for_cpu" },
	{ 0x199fa99a, "spi_sync_locked" },
	{ 0x9d832a70, "dma_sync_single_for_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb60429e, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "of_mmc_spi");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");
