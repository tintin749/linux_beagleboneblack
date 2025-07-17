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
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x315bef8d, "devm_gpiod_get_array_optional" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x461fbefc, "map_destroy" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0x46da0df8, "do_map_probe" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x91452968, "_dev_err" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xc17155ce, "mtd_device_parse_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4e0b0bae, "mtd_concat_destroy" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xf364095d, "mtd_device_unregister" },
	{ 0xc3d652f9, "mtd_concat_create" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

