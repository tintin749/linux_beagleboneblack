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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x517949a2, "st_sensors_set_dataready_irq" },
	{ 0x93acaaaa, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f3f58eb, "st_sensors_deallocate_trigger" },
	{ 0x632de043, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0x9811685c, "st_sensors_allocate_trigger" },
	{ 0x7bee2dda, "iio_device_unregister" },
	{ 0xbea295bd, "st_sensors_validate_device" },
	{ 0xeea1f1c6, "st_sensors_init_sensor" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc5da79c6, "__iio_device_register" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xe93b9ae5, "st_sensors_debugfs_reg_access" },
	{ 0x62309c03, "st_sensors_get_settings_index" },
	{ 0xdba85eae, "st_sensors_set_odr" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x2ee86915, "st_sensors_verify_id" },
	{ 0x80be91b5, "st_sensors_read_info_raw" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "st_sensors");

