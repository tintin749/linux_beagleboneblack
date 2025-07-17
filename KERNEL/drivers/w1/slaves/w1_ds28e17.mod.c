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
	{ 0xd544d84d, "param_ops_byte" },
	{ 0x48a0f781, "w1_unregister_family" },
	{ 0xa986e4d9, "w1_register_family" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x405e9b64, "w1_reset_resume_command" },
	{ 0xed423968, "w1_read_block" },
	{ 0xf102732a, "crc16" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x4a5a6dc3, "w1_touch_bit" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcc9acab9, "w1_read_8" },
	{ 0x7a0127d4, "w1_write_8" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xae239781, "w1_write_block" },
	{ 0x368ac8df, "w1_reset_select_slave" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "wire");

