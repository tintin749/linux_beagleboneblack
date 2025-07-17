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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0x2a57f60a, "fpga_mgr_register" },
	{ 0x389accb5, "devm_fpga_mgr_create" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x91452968, "_dev_err" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0x12a38747, "usleep_range" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x94355ce7, "fpga_mgr_unregister" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("of:N*T*Cxlnx,fpga-slave-serial");
MODULE_ALIAS("of:N*T*Cxlnx,fpga-slave-serialC*");
