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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2736e291, "ieee80211_queue_work" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0xb2444eb2, "wl1251_free_hw" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x65931410, "devm_gpio_request_one" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x8d55711b, "wl1251_init_ieee80211" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0xe2fe5248, "ieee80211_free_hw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd984f93, "wl1251_alloc_hw" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "mac80211,wl1251");

