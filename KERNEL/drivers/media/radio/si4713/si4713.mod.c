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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x97255bdf, "strlen" },
	{ 0x5f754e5a, "memset" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8287700d, "platform_device_unregister" },
	{ 0x2673b447, "platform_device_add" },
	{ 0x268645c, "v4l2_device_unregister_subdev" },
	{ 0xbe1b2621, "platform_device_put" },
	{ 0x16380f80, "platform_device_add_data" },
	{ 0xa3a0881, "platform_device_alloc" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x67f2d4ed, "v4l2_ctrl_new_std_menu" },
	{ 0x349cb25, "v4l2_ctrl_new_custom" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0x66930e3c, "devm_regulator_get_optional" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xeea0399, "strscpy" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
	{ 0xc37335b0, "complete" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csilabs,si4713");
MODULE_ALIAS("of:N*T*Csilabs,si4713C*");
MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "7317501E6981AD9CFC268DA");
