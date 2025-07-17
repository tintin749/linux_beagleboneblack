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
	{ 0xa10877c3, "pmbus_do_remove" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x5f754e5a, "memset" },
	{ 0x5a742e56, "crc8" },
	{ 0x9d669763, "memcpy" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0x91452968, "_dev_err" },
	{ 0x45993567, "debugfs_create_devm_seqfile" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x5b7490f2, "pmbus_get_debugfs_dir" },
	{ 0x5fb70685, "pmbus_do_probe" },
	{ 0xea8d5fa9, "devm_nvmem_register" },
	{ 0x6a03dbce, "i2c_smbus_write_block_data" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4db456fe, "i2c_smbus_read_block_data" },
	{ 0x471114d1, "gpiochip_get_data" },
};

MODULE_INFO(depends, "pmbus_core,crc8");

MODULE_ALIAS("i2c:adm1266");
MODULE_ALIAS("of:N*T*Cadi,adm1266");
MODULE_ALIAS("of:N*T*Cadi,adm1266C*");
