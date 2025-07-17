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
	{ 0xb70bc187, "rsi_91x_init" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc207ee07, "complete_and_exit" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x22774602, "rsi_mac80211_detach" },
	{ 0x1eca4cda, "rsi_read_pkt" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x91452968, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x3066972, "wake_up_process" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x5e5471c3, "rsi_hal_device_init" },
	{ 0x4fad61, "consume_skb" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x738c0b10, "skb_put" },
	{ 0xac0d64bb, "rsi_91x_deinit" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd370cbf1, "rsi_bt_ops" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9795F3AE7EF075738751401");
