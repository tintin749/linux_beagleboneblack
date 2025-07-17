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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xc98d2b8, "drm_panel_add" },
	{ 0xd101f728, "drm_panel_init" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf9a482f9, "msleep" },
	{ 0x91452968, "_dev_err" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x2c44a296, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xac455af0, "drm_mode_duplicate" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x76a4d42b, "drm_panel_unprepare" },
	{ 0x8570af28, "drm_panel_disable" },
	{ 0x1780dd8c, "drm_panel_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:nl8048hl11");
MODULE_ALIAS("of:N*T*Cnec,nl8048hl11");
MODULE_ALIAS("of:N*T*Cnec,nl8048hl11C*");
