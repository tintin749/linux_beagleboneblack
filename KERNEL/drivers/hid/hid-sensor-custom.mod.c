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
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xfbaecf3c, "misc_deregister" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xe6d42467, "misc_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x421d4dcf, "krealloc" },
	{ 0x6d3e8ad2, "sensor_hub_remove_callback" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x4b692c41, "sensor_hub_register_callback" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8f8f657f, "bsearch" },
	{ 0x8d09d04f, "sensor_hub_input_attr_get_raw_value" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xf0ac456a, "sensor_hub_get_feature" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5e588863, "sensor_hub_device_open" },
	{ 0x12ae932a, "sensor_hub_device_close" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7acd29d7, "sensor_hub_set_feature" },
	{ 0x9d1bbf27, "hid_sensor_get_usage_index" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "hid-sensor-hub");

MODULE_ALIAS("platform:HID-SENSOR-2000e1");
MODULE_ALIAS("platform:HID-SENSOR-2000e2");
