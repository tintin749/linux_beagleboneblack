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
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0xf7232345, "devm_add_action" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xf144f336, "input_event" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x91452968, "_dev_err" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1781p0898d*dc*dsc*dp*ic*isc*ip*in*");
