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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81123cd3, "devm_ioremap" },
	{ 0x91452968, "_dev_err" },
	{ 0x554f6a60, "__rtc_register_device" },
	{ 0xca4509, "rtc_nvmem_register" },
	{ 0xab6da217, "devm_rtc_allocate_device" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x5f754e5a, "memset" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x5f5f36e5, "rtc_update_irq" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

