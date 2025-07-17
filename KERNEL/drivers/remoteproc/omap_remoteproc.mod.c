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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x1f91b992, "mbox_free_channel" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x6d734846, "__pm_runtime_use_autosuspend" },
	{ 0xa83edb65, "__pm_runtime_set_status" },
	{ 0x1d94580b, "mbox_request_channel" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xe9da5ed8, "rproc_get_id" },
	{ 0x1f77dc3c, "rproc_add" },
	{ 0xb2857f5b, "of_reserved_mem_device_init_by_idx" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xc51edc0c, "pm_runtime_set_autosuspend_delay" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xcab5a97b, "of_count_phandle_with_args" },
	{ 0xc96ec9e, "of_property_read_u32_index" },
	{ 0xa0c3809e, "syscon_regmap_lookup_by_phandle" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x2e814a7d, "of_property_count_elems_of_size" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x6ab80a2b, "rproc_alloc" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0x4606d9e4, "devm_reset_control_array_get" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xc4937fde, "ti_clk_is_in_standby" },
	{ 0x1000e51, "schedule" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xe647e752, "mbox_send_message" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x98a739b, "omap_iommu_domain_deactivate" },
	{ 0x96f71493, "omap_iommu_domain_activate" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xa602363, "of_find_device_by_node" },
	{ 0xa80c13c3, "of_parse_phandle" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xde0ce9bc, "rproc_vq_interrupt" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc37335b0, "complete" },
	{ 0xcebdce9a, "of_reserved_mem_device_release" },
	{ 0x625dd41f, "rproc_free" },
	{ 0x40fa91c6, "rproc_del" },
	{ 0xdddd47fd, "rproc_report_crash" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x91452968, "_dev_err" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,omap4-dsp");
MODULE_ALIAS("of:N*T*Cti,omap4-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap4-ipu");
MODULE_ALIAS("of:N*T*Cti,omap4-ipuC*");
MODULE_ALIAS("of:N*T*Cti,omap5-dsp");
MODULE_ALIAS("of:N*T*Cti,omap5-dspC*");
MODULE_ALIAS("of:N*T*Cti,omap5-ipu");
MODULE_ALIAS("of:N*T*Cti,omap5-ipuC*");
MODULE_ALIAS("of:N*T*Cti,dra7-dsp");
MODULE_ALIAS("of:N*T*Cti,dra7-dspC*");
MODULE_ALIAS("of:N*T*Cti,dra7-ipu");
MODULE_ALIAS("of:N*T*Cti,dra7-ipuC*");
