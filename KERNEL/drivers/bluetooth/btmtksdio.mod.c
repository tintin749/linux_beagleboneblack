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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0xaed7b306, "hci_unregister_dev" },
	{ 0x865140ee, "pm_runtime_allow" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x9731bbab, "pm_runtime_forbid" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xaf4c5fc2, "__hci_cmd_sync" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xfb0f7183, "__hci_cmd_send" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9d669763, "memcpy" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x214e4265, "bt_warn" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f6abac6, "sdio_readsb" },
	{ 0x738c0b10, "skb_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x2b8bc07d, "sdio_writesb" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x75a38389, "skb_clone" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x2b3d92a6, "sdio_set_host_pm_flags" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0x718b8b7, "bt_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x875564aa, "sdio_readl" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2799bd25, "sdio_writel" },
	{ 0x1a52013b, "sdio_claim_host" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("sdio:c*v037Ad7663*");
MODULE_ALIAS("sdio:c*v037Ad7668*");

MODULE_INFO(srcversion, "A576324DAED98E71ED69DA6");
