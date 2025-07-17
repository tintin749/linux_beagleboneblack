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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x1386a163, "iio_channel_release" },
	{ 0xd712add3, "power_supply_unregister" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x3f05e582, "power_supply_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xad5434b8, "iio_channel_get" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x6369fc49, "iio_read_channel_processed" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa7fbb5f5, "power_supply_get_drvdata" },
	{ 0x858845ea, "gpiod_get_raw_value" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0x52bb0701, "power_supply_changed" },
	{ 0x6d4c3b0e, "power_supply_am_i_supplied" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "");

