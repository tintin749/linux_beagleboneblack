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
	{ 0xfb52130d, "usb_serial_generic_get_icount" },
	{ 0x97507f8e, "usb_serial_generic_tiocmiwait" },
	{ 0xabeed1a8, "usb_serial_deregister_drivers" },
	{ 0x7fd7171, "usb_serial_register_drivers" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x9d669763, "memcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x61004fdf, "tty_insert_flip_string_fixed_flag" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0xf1a50d83, "__tty_insert_flip_char" },
	{ 0x74c9f051, "usb_serial_generic_close" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x55e9260e, "usb_serial_generic_write_start" },
	{ 0x92908fa5, "usb_serial_generic_submit_read_urbs" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0x91452968, "_dev_err" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v110Ap1250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1451d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1658d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1653d*dc*dsc*dp*ic*isc*ip*in*");
