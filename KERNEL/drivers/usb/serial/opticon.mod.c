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
	{ 0x769bda07, "usb_serial_generic_unthrottle" },
	{ 0xa3bbcc6e, "usb_serial_generic_throttle" },
	{ 0xabeed1a8, "usb_serial_deregister_drivers" },
	{ 0x7fd7171, "usb_serial_register_drivers" },
	{ 0x1b67aad2, "usb_serial_generic_open" },
	{ 0xa3beced3, "usb_clear_halt" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x91452968, "_dev_err" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0x61004fdf, "tty_insert_flip_string_fixed_flag" },
	{ 0x74c9f051, "usb_serial_generic_close" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x22281e42, "usb_serial_port_softint" },
	{ 0x37a0cba, "kfree" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v065Ap0009d*dc*dsc*dp*ic*isc*ip*in*");
