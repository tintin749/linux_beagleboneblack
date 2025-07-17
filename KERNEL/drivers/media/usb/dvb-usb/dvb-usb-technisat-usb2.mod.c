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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x8ecee3c6, "dvb_usb_device_exit" },
	{ 0x30937bb4, "dvb_usb_device_init" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x69b7655c, "dvb_frontend_detach" },
	{ 0x34782487, "param_ops_short" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x9f46d29a, "usb_set_interface" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xe4bccdad, "ir_raw_event_store" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf37ea5ef, "ir_raw_event_handle" },
};

MODULE_INFO(depends, "dvb-usb,rc-core");

MODULE_ALIAS("usb:v14F7p0500d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6EB32D3C8ED97265445E6F2");
