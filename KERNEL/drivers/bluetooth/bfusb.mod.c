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
	{ 0xe6f8407d, "skb_push" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x8bba90ea, "skb_unlink" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x9d669763, "memcpy" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0xaed7b306, "hci_unregister_dev" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xd1b54c1, "_raw_write_unlock_irqrestore" },
	{ 0x8d66d4b, "_raw_write_lock_irqsave" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x766b9a6d, "skb_dequeue" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1B78857D6FB12E14298332");
