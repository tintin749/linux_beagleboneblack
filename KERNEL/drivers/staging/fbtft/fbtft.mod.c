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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe428104e, "device_remove_file" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x9d55137d, "devm_gpiod_get_index_optional" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0x46ded0d2, "framebuffer_release" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0xa19dae68, "fb_sys_read" },
	{ 0xf778e78f, "backlight_device_register" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x32bf10fb, "sys_copyarea" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xf0a99826, "register_framebuffer" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcbcbead6, "device_property_read_string" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x483a055b, "device_create_file" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb9430045, "sys_fillrect" },
	{ 0xc2acc033, "hex_dump_to_buffer" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3e39ecc6, "sys_imageblit" },
	{ 0xbb2bf8cf, "fb_sys_write" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xbbb88a08, "dev_driver_string" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0x7eb99300, "framebuffer_alloc" },
	{ 0x7b11be53, "fb_deferred_io_cleanup" },
	{ 0x64db1b4e, "fb_deferred_io_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9233f84c, "backlight_device_unregister" },
	{ 0x63727adc, "param_ops_ulong" },
	{ 0x61f90f46, "device_property_present" },
	{ 0x2bb33077, "vscnprintf" },
	{ 0x361df619, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

