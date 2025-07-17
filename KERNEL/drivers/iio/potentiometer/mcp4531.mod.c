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
	{ 0xf1b7dcce, "i2c_smbus_read_word_data" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0x91452968, "_dev_err" },
	{ 0xfdba9257, "i2c_match_id" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4531-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4532-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4541-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4542-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4551-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4552-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4561-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4562-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4631-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4632-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4641-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4642-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4651-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4652-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4661-104C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-502");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-502C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-103");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-103C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-503");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-503C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-104");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp4662-104C*");
MODULE_ALIAS("i2c:mcp4531-502");
MODULE_ALIAS("i2c:mcp4531-103");
MODULE_ALIAS("i2c:mcp4531-503");
MODULE_ALIAS("i2c:mcp4531-104");
MODULE_ALIAS("i2c:mcp4532-502");
MODULE_ALIAS("i2c:mcp4532-103");
MODULE_ALIAS("i2c:mcp4532-503");
MODULE_ALIAS("i2c:mcp4532-104");
MODULE_ALIAS("i2c:mcp4541-502");
MODULE_ALIAS("i2c:mcp4541-103");
MODULE_ALIAS("i2c:mcp4541-503");
MODULE_ALIAS("i2c:mcp4541-104");
MODULE_ALIAS("i2c:mcp4542-502");
MODULE_ALIAS("i2c:mcp4542-103");
MODULE_ALIAS("i2c:mcp4542-503");
MODULE_ALIAS("i2c:mcp4542-104");
MODULE_ALIAS("i2c:mcp4551-502");
MODULE_ALIAS("i2c:mcp4551-103");
MODULE_ALIAS("i2c:mcp4551-503");
MODULE_ALIAS("i2c:mcp4551-104");
MODULE_ALIAS("i2c:mcp4552-502");
MODULE_ALIAS("i2c:mcp4552-103");
MODULE_ALIAS("i2c:mcp4552-503");
MODULE_ALIAS("i2c:mcp4552-104");
MODULE_ALIAS("i2c:mcp4561-502");
MODULE_ALIAS("i2c:mcp4561-103");
MODULE_ALIAS("i2c:mcp4561-503");
MODULE_ALIAS("i2c:mcp4561-104");
MODULE_ALIAS("i2c:mcp4562-502");
MODULE_ALIAS("i2c:mcp4562-103");
MODULE_ALIAS("i2c:mcp4562-503");
MODULE_ALIAS("i2c:mcp4562-104");
MODULE_ALIAS("i2c:mcp4631-502");
MODULE_ALIAS("i2c:mcp4631-103");
MODULE_ALIAS("i2c:mcp4631-503");
MODULE_ALIAS("i2c:mcp4631-104");
MODULE_ALIAS("i2c:mcp4632-502");
MODULE_ALIAS("i2c:mcp4632-103");
MODULE_ALIAS("i2c:mcp4632-503");
MODULE_ALIAS("i2c:mcp4632-104");
MODULE_ALIAS("i2c:mcp4641-502");
MODULE_ALIAS("i2c:mcp4641-103");
MODULE_ALIAS("i2c:mcp4641-503");
MODULE_ALIAS("i2c:mcp4641-104");
MODULE_ALIAS("i2c:mcp4642-502");
MODULE_ALIAS("i2c:mcp4642-103");
MODULE_ALIAS("i2c:mcp4642-503");
MODULE_ALIAS("i2c:mcp4642-104");
MODULE_ALIAS("i2c:mcp4651-502");
MODULE_ALIAS("i2c:mcp4651-103");
MODULE_ALIAS("i2c:mcp4651-503");
MODULE_ALIAS("i2c:mcp4651-104");
MODULE_ALIAS("i2c:mcp4652-502");
MODULE_ALIAS("i2c:mcp4652-103");
MODULE_ALIAS("i2c:mcp4652-503");
MODULE_ALIAS("i2c:mcp4652-104");
MODULE_ALIAS("i2c:mcp4661-502");
MODULE_ALIAS("i2c:mcp4661-103");
MODULE_ALIAS("i2c:mcp4661-503");
MODULE_ALIAS("i2c:mcp4661-104");
MODULE_ALIAS("i2c:mcp4662-502");
MODULE_ALIAS("i2c:mcp4662-103");
MODULE_ALIAS("i2c:mcp4662-503");
MODULE_ALIAS("i2c:mcp4662-104");
