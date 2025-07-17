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
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xc98d2b8, "drm_panel_add" },
	{ 0xd101f728, "drm_panel_init" },
	{ 0xf778e78f, "backlight_device_register" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x91452968, "_dev_err" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x97255bdf, "strlen" },
	{ 0x84b183ae, "strncmp" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x2c44a296, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xac455af0, "drm_mode_duplicate" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x9233f84c, "backlight_device_unregister" },
	{ 0x76a4d42b, "drm_panel_unprepare" },
	{ 0x8570af28, "drm_panel_disable" },
	{ 0x1780dd8c, "drm_panel_remove" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:acx565akm");
MODULE_ALIAS("of:N*T*Csony,acx565akm");
MODULE_ALIAS("of:N*T*Csony,acx565akmC*");
