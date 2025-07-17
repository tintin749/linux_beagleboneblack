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
	{ 0xf9a482f9, "msleep" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf3dc74aa, "nci_recv_frame" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xb0da4f6e, "nxp_nci_probe" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xf910037, "nxp_nci_remove" },
	{ 0x3ed0dec0, "nxp_nci_fw_recv_frame" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "nci,nxp-nci");

MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2c");
MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2cC*");
MODULE_ALIAS("i2c:nxp-nci_i2c");
