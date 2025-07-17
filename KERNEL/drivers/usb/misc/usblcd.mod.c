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
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xbfda6c5b, "usb_register_dev" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xe99aaa84, "usb_deregister_dev" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x5da62bef, "usb_find_interface" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x91452968, "_dev_err" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5f754e5a, "memset" },
	{ 0xa7b3181c, "up_read" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xfb1d7438, "down_read" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x581cde4e, "up" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v10D2p*d*dc*dsc*dp*ic*isc*ip*in*");
