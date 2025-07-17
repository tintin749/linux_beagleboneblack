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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7b04238d, "dibusb_read_eeprom_byte" },
	{ 0x1417388e, "dib3000mc_pid_parse" },
	{ 0x7c3f64b5, "dib3000mc_pid_control" },
	{ 0x1dcd124a, "dib3000mc_get_tuner_i2c_master" },
	{ 0xc5850110, "printk" },
	{ 0xe3279d46, "dib3000mc_set_config" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dib3000mc");

