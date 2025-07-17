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
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0x2138946, "btmrvl_send_module_cfg_cmd" },
	{ 0xb0195a7e, "btmrvl_remove_card" },
	{ 0x91452968, "_dev_err" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xc6115f7f, "btmrvl_register_hdev" },
	{ 0x60910fc, "btmrvl_add_card" },
	{ 0xad85fdbf, "device_init_wakeup" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x98b3ea, "irq_of_parse_and_map" },
	{ 0x3a5fa4cf, "of_match_node" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b8bc07d, "sdio_writesb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x13f14c2c, "btmrvl_check_evtpkt" },
	{ 0xe77a0724, "btmrvl_process_event" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x738c0b10, "skb_put" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x6bc0b4ca, "btmrvl_interrupt" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x7f6abac6, "sdio_readsb" },
	{ 0x8c0215f2, "pm_system_wakeup" },
	{ 0x966a5a84, "pm_wakeup_dev_event" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2b3d92a6, "sdio_set_host_pm_flags" },
	{ 0x705e36c0, "btmrvl_enable_hs" },
	{ 0xa97e8da, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2a633d3f, "hci_resume_dev" },
	{ 0xfa7533e6, "sdio_get_host_pm_caps" },
	{ 0x7fcc799a, "dev_coredumpv" },
	{ 0x9d669763, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0x718b8b7, "bt_info" },
	{ 0x76dfdc17, "sdio_readb" },
	{ 0xa40a09e5, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0x9313749f, "sdio_writeb" },
	{ 0x1a52013b, "sdio_claim_host" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "DDCB10C1D7C0B0A02C0A834");
