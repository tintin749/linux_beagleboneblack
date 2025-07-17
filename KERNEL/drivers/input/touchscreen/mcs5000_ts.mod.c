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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x47c19580, "input_register_device" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf144f336, "input_event" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mcs5000_ts");
