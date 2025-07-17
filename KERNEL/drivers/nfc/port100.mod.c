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
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x915c567a, "nfc_digital_register_device" },
	{ 0xac66f4be, "nfc_digital_allocate_device" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xcb510bc2, "complete_all" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x738c0b10, "skb_put" },
	{ 0x4fad61, "consume_skb" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x91452968, "_dev_err" },
	{ 0xc37335b0, "complete" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xefc13bc6, "nfc_digital_free_device" },
	{ 0xe0256f8b, "nfc_digital_unregister_device" },
};

MODULE_INFO(depends, "nfc_digital");

MODULE_ALIAS("usb:v054Cp06C1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp06C3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "735840D656FFE2C17C211CC");
