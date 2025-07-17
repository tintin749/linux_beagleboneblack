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
	{ 0x91452968, "_dev_err" },
	{ 0x1ef9af39, "devm_rc_register_device" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7e64a84a, "devm_rc_allocate_device" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf37ea5ef, "ir_raw_event_handle" },
	{ 0x7136e15d, "ir_raw_event_set_idle" },
	{ 0xef68f630, "ir_raw_event_store_with_filter" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x855a4eec, "usb_kill_urb" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v04E8pFF30d*dc*dsc*dp*ic*isc*ip*in*");
