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
	{ 0x8a31d213, "nfc_register_device" },
	{ 0xcb4ee53d, "pn533_recv_frame" },
	{ 0xd0d2e9ca, "pn533_finalize_setup" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0x89c99557, "pn532_i2c_nfc_alloc" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xc6ecde43, "pn53x_unregister_nfc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x441e345d, "pn53x_common_clean" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6cd31008, "pn53x_common_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "nfc,pn533");

MODULE_ALIAS("i2c:pn533_i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn532");
MODULE_ALIAS("of:N*T*Cnxp,pn532C*");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn533-i2cC*");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2c");
MODULE_ALIAS("of:N*T*Cnxp,pn532-i2cC*");

MODULE_INFO(srcversion, "93C0F2F5217A40F677FB507");
