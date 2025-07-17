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
	{ 0xabeed1a8, "usb_serial_deregister_drivers" },
	{ 0x7fd7171, "usb_serial_register_drivers" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x9d669763, "memcpy" },
	{ 0x55b25e8, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x146cdd8f, "tty_port_tty_wakeup" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0x61004fdf, "tty_insert_flip_string_fixed_flag" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v9710p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7715d*dc*dsc*dp*ic*isc*ip*in*");
