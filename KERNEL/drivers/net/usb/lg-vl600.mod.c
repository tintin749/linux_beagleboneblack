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
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0x7e11bf03, "usbnet_cdc_status" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x29b50f57, "usbnet_cdc_bind" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd2022c86, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fad61, "consume_skb" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x87ac4650, "usbnet_skb_return" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x75a38389, "skb_clone" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0x738c0b10, "skb_put" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xfe9d1571, "skb_copy_expand" },
};

MODULE_INFO(depends, "cdc_ether");

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");
