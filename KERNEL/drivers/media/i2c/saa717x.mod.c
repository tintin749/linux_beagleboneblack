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
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xc090c243, "v4l2_ctrl_handler_log_status" },
	{ 0xc5850110, "printk" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x268645c, "v4l2_device_unregister_subdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:saa717x");
