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
	{ 0x55b25e8, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf1a50d83, "__tty_insert_flip_char" },
	{ 0x25b8aad7, "tty_kref_put" },
	{ 0x2df2214a, "usb_serial_handle_dcd_change" },
	{ 0x85c6ab2a, "tty_port_tty_get" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x92908fa5, "usb_serial_generic_submit_read_urbs" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x92b57248, "flush_work" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x91452968, "_dev_err" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x22281e42, "usb_serial_port_softint" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1202d*dc*dsc*dp*ic*isc*ip*in*");
