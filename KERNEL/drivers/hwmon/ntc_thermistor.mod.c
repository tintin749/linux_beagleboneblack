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
	{ 0x60bffe6d, "div64_u64" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xc53361d9, "devm_hwmon_device_register_with_info" },
	{ 0x91452968, "_dev_err" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x854e45f3, "iio_get_channel_type" },
	{ 0x741e4592, "devm_iio_channel_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x959fb4af, "iio_convert_raw_to_processed" },
	{ 0x3edfeba3, "iio_read_channel_raw" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cepcos,b57330v2103");
MODULE_ALIAS("of:N*T*Cepcos,b57330v2103C*");
MODULE_ALIAS("of:N*T*Cepcos,b57891s0103");
MODULE_ALIAS("of:N*T*Cepcos,b57891s0103C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104");
MODULE_ALIAS("of:N*T*Cmurata,ncp03wf104C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333");
MODULE_ALIAS("of:N*T*Cmurata,ncp15wl333C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp15xh103");
MODULE_ALIAS("of:N*T*Cmurata,ncp15xh103C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp18wb473C*");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473");
MODULE_ALIAS("of:N*T*Cmurata,ncp21wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp03wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp15wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333");
MODULE_ALIAS("of:N*T*Cntc,ncp15wl333C*");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp18wb473C*");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473");
MODULE_ALIAS("of:N*T*Cntc,ncp21wb473C*");
