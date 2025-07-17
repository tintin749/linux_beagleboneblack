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
	{ 0xaf19e06e, "v4l2_fh_release" },
	{ 0xaee7d479, "v4l2_fh_open" },
	{ 0xf7057513, "video_ioctl2" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x9b72c67e, "v4l2_device_unregister" },
	{ 0xb6cb7944, "__video_register_device" },
	{ 0xc7285ced, "video_device_release_empty" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x91452968, "_dev_err" },
	{ 0xfab97680, "v4l2_device_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0xeea0399, "strscpy" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x9b944008, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x82ac5ca9, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x139935eb, "v4l2_device_disconnect" },
	{ 0x25d4d5b1, "video_unregister_device" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10C4p818Ad*dc*dsc*dp*ic03isc00ip00in*");
