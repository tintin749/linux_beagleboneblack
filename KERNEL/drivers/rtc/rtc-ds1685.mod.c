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
	{ 0xf9a482f9, "msleep" },
	{ 0x6971447a, "rtc_month_days" },
	{ 0xf3cef28e, "rtc_add_group" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0x5f5f36e5, "rtc_update_irq" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xca4509, "rtc_nvmem_register" },
	{ 0x554f6a60, "__rtc_register_device" },
	{ 0xab6da217, "devm_rtc_allocate_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x5f3d862c, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");

