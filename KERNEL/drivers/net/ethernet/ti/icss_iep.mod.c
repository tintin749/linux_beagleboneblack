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
	{ 0x908bba01, "__devm_regmap_init" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x695bf5e9, "hrtimer_cancel" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x95023b55, "ptp_clock_unregister" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd13d5437, "ptp_clock_event" },
	{ 0xec523f88, "hrtimer_start_range_ns" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x9f4dd095, "of_device_is_available" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1678a6bb, "ptp_clock_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x9eb96e7c, "platform_get_irq_byname_optional" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x607c184d, "get_device" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x9d669763, "memcpy" },
	{ 0x2a4ea56, "ptp_clock_index" },
	{ 0xa362bf8f, "hrtimer_init" },
	{ 0xdd3a76b0, "regmap_get_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa602363, "of_find_device_by_node" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am654-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am654-icss-iepC*");
MODULE_ALIAS("of:N*T*Cti,am5728-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am5728-icss-iepC*");
MODULE_ALIAS("of:N*T*Cti,am3356-icss-iep");
MODULE_ALIAS("of:N*T*Cti,am3356-icss-iepC*");
