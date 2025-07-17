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
	{ 0x944148b5, "ndlc_probe" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x5f754e5a, "memset" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xe475b194, "ndlc_recv" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9313abc2, "ndlc_remove" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x61f90f46, "device_property_present" },
};

MODULE_INFO(depends, "st-nci");

MODULE_ALIAS("acpi*:SMO2101:*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spi");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-spiC*");
MODULE_ALIAS("spi:st_nci_spi");
