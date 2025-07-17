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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x692df783, "flexcop_device_initialize" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x9f515fe1, "flexcop_device_kfree" },
	{ 0x7fa4ca05, "flexcop_sram_ctrl" },
	{ 0x5f754e5a, "memset" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe0e8be79, "flexcop_device_kmalloc" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x3f5f8239, "flexcop_sram_set_dest" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x64fc3752, "flexcop_pass_dmx_packets" },
	{ 0x93b01271, "flexcop_wan_set_speed" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x3cef1aee, "flexcop_device_exit" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");
