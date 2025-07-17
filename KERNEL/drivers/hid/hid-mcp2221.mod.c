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
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xc37335b0, "complete" },
	{ 0x9d669763, "memcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x37a0cba, "kfree" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x91452968, "_dev_err" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004D8p000000DD");
