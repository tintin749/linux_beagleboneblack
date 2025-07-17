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
	{ 0xf60688a2, "usb_stor_set_xfer_buf" },
	{ 0x4212a830, "usb_stor_bulk_transfer_buf" },
	{ 0xfbbde479, "usb_stor_access_xfer_buf" },
	{ 0x4fe7693f, "usb_stor_post_reset" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x14cdfdc0, "usb_stor_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x21719c33, "usb_stor_probe2" },
	{ 0x810623e0, "usb_stor_host_template_init" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x41625746, "usb_stor_pre_reset" },
	{ 0xa5731e96, "usb_stor_reset_resume" },
	{ 0xc813314a, "usb_stor_suspend" },
	{ 0xbe62f667, "usb_stor_probe1" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf1223e44, "usb_stor_bulk_transfer_sg" },
	{ 0x17cf17c1, "usb_stor_bulk_srb" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0CF2p6250d*dc*dsc*dp*ic*isc*ip*in*");
