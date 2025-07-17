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
	{ 0x6a6d6acc, "default_llseek" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0x6531c7b, "usb_enable_autosuspend" },
	{ 0xc9aa1203, "hwrng_register" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x406e376b, "usb_get_intf" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9d669763, "memcpy" },
	{ 0xda8cc3b9, "hwrng_unregister" },
	{ 0xcc4f8ff0, "usb_poison_urb" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0xb2d4eb27, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1D50p60C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D8p0001d*dc*dsc*dp*ic*isc*ip*in*");
