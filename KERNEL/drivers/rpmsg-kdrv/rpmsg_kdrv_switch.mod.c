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
	{ 0x10d791b7, "rpmsg_kdrv_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x91452968, "_dev_err" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x71c90087, "memcmp" },
	{ 0x9d669763, "memcpy" },
	{ 0x24a82fc9, "rpmsg_kdrv_send_message" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0x648bc9a7, "rpmsg_kdrv_send_request_with_response" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "rpmsg_kdrv");

