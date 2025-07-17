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
	{ 0x8523191, "v4l2_ctrl_subdev_log_status" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x22e3e54c, "au8522_readreg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x67d670b4, "au8522_writereg" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0xc5850110, "printk" },
	{ 0x98b64e7c, "au8522_get_state" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7fd70ef4, "au8522_release_state" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x268645c, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "au8522_common");

MODULE_ALIAS("i2c:au8522");
