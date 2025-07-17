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
	{ 0xf9a482f9, "msleep" },
	{ 0xf4550517, "__lbtf_cmd" },
	{ 0xb90a88ff, "lbtf_cmd_copyback" },
	{ 0x20a8fdac, "lbtf_cmd_response_rx" },
	{ 0xae9645b5, "lbtf_send_tx_feedback" },
	{ 0xe8ab6820, "lbtf_add_card" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe3ccb909, "lbtf_remove_card" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x676ebd08, "kernel_param_unlock" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x67139921, "kernel_param_lock" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0xcc1b3026, "lbtf_rx" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd5833f81, "usb_reset_device" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x82303e2f, "lbtf_bcn_sent" },
	{ 0x738c0b10, "skb_put" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x7f612961, "usb_alloc_urb" },
};

MODULE_INFO(depends, "libertas_tf");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");
