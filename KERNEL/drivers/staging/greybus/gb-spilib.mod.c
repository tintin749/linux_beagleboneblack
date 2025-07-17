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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x329d858f, "spi_register_controller" },
	{ 0xdbda7db9, "__spi_alloc_controller" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xedc49d53, "spi_new_device" },
	{ 0x327ca361, "spi_unregister_controller" },
	{ 0x21384305, "gb_operation_sync_timeout" },
	{ 0x91452968, "_dev_err" },
	{ 0x2356840b, "gb_operation_request_send_sync_timeout" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4a67c15c, "spi_finalize_current_message" },
	{ 0x4f1bb75b, "gb_operation_get_payload_size_max" },
	{ 0xa3c67852, "gb_operation_put" },
	{ 0xaca9a45b, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "greybus");

