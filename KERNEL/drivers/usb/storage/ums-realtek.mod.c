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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4212a830, "usb_stor_bulk_transfer_buf" },
	{ 0x4fe7693f, "usb_stor_post_reset" },
	{ 0x8288a736, "usb_stor_control_msg" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x6531c7b, "usb_enable_autosuspend" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x14cdfdc0, "usb_stor_disconnect" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xaac2a3d8, "usb_autopm_put_interface_async" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x21719c33, "usb_stor_probe2" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x810623e0, "usb_stor_host_template_init" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x41625746, "usb_stor_pre_reset" },
	{ 0xa5731e96, "usb_stor_reset_resume" },
	{ 0xbe62f667, "usb_stor_probe1" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0BDAp0138d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0184d*dc*dsc*dp*ic*isc*ip*in*");
