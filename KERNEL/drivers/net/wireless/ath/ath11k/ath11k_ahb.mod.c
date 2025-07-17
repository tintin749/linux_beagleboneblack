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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf81f71a7, "init_dummy_netdev" },
	{ 0x8e201a6, "ath11k_core_free" },
	{ 0x70351a34, "napi_disable" },
	{ 0x6acbbe17, "napi_schedule_prep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xa07d1b3c, "tasklet_setup" },
	{ 0xeb27c785, "dma_set_mask" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x9c05ba66, "ath11k_core_alloc" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x3c459ca, "ath11k_core_init" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5b96393, "ath11k_core_pre_init" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x836e1181, "ath11k_core_deinit" },
	{ 0xac9e428c, "ath11k_ce_per_engine_service" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xa1846c8, "ath11k_hal_srng_init" },
	{ 0x8186fa8d, "ath11k_err" },
	{ 0x8a8bccad, "__napi_schedule" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5b5dd279, "ath11k_warn" },
	{ 0x56c3d0fa, "platform_get_irq_byname" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0x55c4574e, "ath11k_hal_srng_deinit" },
	{ 0x822592db, "rproc_shutdown" },
	{ 0xf1eb9615, "ath11k_dp_service_srng" },
	{ 0xb298e641, "__netif_napi_del" },
	{ 0x3180ec55, "ath11k_ce_cleanup_pipes" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ec94052, "ath11k_ce_free_pipes" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xd1d8bba4, "devm_platform_get_and_ioremap_resource" },
	{ 0x91f857c4, "ath11k_ce_get_attr_flags" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x87dd9ef8, "rproc_boot" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x13e561f3, "rproc_get_by_phandle" },
	{ 0x13d0c198, "ath11k_ce_alloc_pipes" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8f889a59, "ath11k_ce_rx_post_buf" },
};

MODULE_INFO(depends, "ath11k");

MODULE_ALIAS("of:N*T*Cqcom,ipq8074-wifi");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-wifiC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-wifi");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-wifiC*");
