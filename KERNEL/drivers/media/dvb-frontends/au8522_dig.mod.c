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
	{ 0x7fd70ef4, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xe5dad31a, "au8522_led_ctrl" },
	{ 0x67d670b4, "au8522_writereg" },
	{ 0x22e3e54c, "au8522_readreg" },
	{ 0xc5850110, "printk" },
	{ 0xc5830829, "au8522_i2c_gate_ctrl" },
	{ 0xcfbe48fd, "au8522_sleep" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xff2fedf0, "au8522_analog_i2c_gate_ctrl" },
	{ 0x98b64e7c, "au8522_get_state" },
	{ 0x9d669763, "memcpy" },
	{ 0xf3ab284f, "au8522_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "au8522_common");

