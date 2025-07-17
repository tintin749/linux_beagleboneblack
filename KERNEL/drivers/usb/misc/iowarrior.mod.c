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
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x97255bdf, "strlen" },
	{ 0x45158076, "usb_string" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xb2d4eb27, "usb_put_intf" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0x5f754e5a, "memset" },
	{ 0x406e376b, "usb_get_intf" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9d669763, "memcpy" },
	{ 0x71c90087, "memcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x91452968, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5da62bef, "usb_find_interface" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07C0p1500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1504d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1506d*dc*dsc*dp*ic*isc*ip*in*");
