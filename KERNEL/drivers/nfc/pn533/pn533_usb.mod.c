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
	{ 0xcb4ee53d, "pn533_recv_frame" },
	{ 0xd0d2e9ca, "pn533_finalize_setup" },
	{ 0xdecfd339, "pn533_rx_frame_is_ack" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc6ecde43, "pn53x_unregister_nfc" },
	{ 0x91452968, "_dev_err" },
	{ 0x99f11aeb, "pn53x_register_nfc" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x441e345d, "pn53x_common_clean" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x6cd31008, "pn53x_common_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "pn533");

MODULE_ALIAS("usb:v04CCp2533d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p5591d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp02E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v072Fp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4C10050ADD7CFDFE4B1B0EA");
