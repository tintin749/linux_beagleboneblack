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
	{ 0xd98c5c1e, "devm_rtc_device_register" },
	{ 0x81123cd3, "devm_ioremap" },
	{ 0x26567c12, "__devm_request_region" },
	{ 0xc94d8e3b, "iomem_resource" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x80ca5026, "_bin2bcd" },
};

MODULE_INFO(depends, "");

