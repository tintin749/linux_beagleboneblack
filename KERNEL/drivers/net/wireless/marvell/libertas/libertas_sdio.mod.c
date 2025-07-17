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
	{ 0x9313749f, "sdio_writeb" },
	{ 0x76dfdc17, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xeb4e6c6a, "lbs_resume" },
	{ 0x2b8bc07d, "sdio_writesb" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x35d85792, "lbs_stop_card" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x92cc2dce, "netdev_alert" },
	{ 0xf007cf46, "__lbs_cmd" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfa7533e6, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfb4aeca8, "lbs_start_card" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x64442f27, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fb7775a, "lbs_get_firmware_async" },
	{ 0x38da9fbb, "lbs_cmd_copyback" },
	{ 0x19a188e5, "lbs_suspend" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7f6abac6, "sdio_readsb" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0x594cbe20, "lbs_remove_card" },
	{ 0xcc5701ff, "sdio_f0_writeb" },
	{ 0x2b3d92a6, "sdio_set_host_pm_flags" },
	{ 0xd193b968, "lbs_process_rxed_packet" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7d50dd0e, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x1bbdee57, "sdio_align_size" },
	{ 0xcad0bf68, "lbs_add_card" },
	{ 0xa40a09e5, "sdio_f0_readb" },
	{ 0x51ee8a5d, "mmc_add_host" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x7fa37630, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x738c0b10, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0x55ec64a4, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");
