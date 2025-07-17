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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf60688a2, "usb_stor_set_xfer_buf" },
	{ 0xfbbde479, "usb_stor_access_xfer_buf" },
	{ 0x4fe7693f, "usb_stor_post_reset" },
	{ 0x14cdfdc0, "usb_stor_disconnect" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x21719c33, "usb_stor_probe2" },
	{ 0x8da4d8e0, "fill_inquiry_response" },
	{ 0x810623e0, "usb_stor_host_template_init" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x41625746, "usb_stor_pre_reset" },
	{ 0xa5731e96, "usb_stor_reset_resume" },
	{ 0x542372e0, "usb_stor_ctrl_transfer" },
	{ 0xc813314a, "usb_stor_suspend" },
	{ 0xa8095bf3, "usb_stor_CB_reset" },
	{ 0xe647f42b, "usb_stor_clear_halt" },
	{ 0xbe62f667, "usb_stor_probe1" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x15915577, "usb_stor_resume" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf1223e44, "usb_stor_bulk_transfer_sg" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v03F0p0207d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0307d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0005d0005dc*dsc*dp*ic*isc*ip*in*");
