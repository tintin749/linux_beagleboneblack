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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x524b0bc7, "snd_soc_dai_active" },
	{ 0x647fdcff, "snd_pcm_hw_constraint_step" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x40b51c05, "__sysfs_match_string" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x33cd2cd6, "cpu_latency_qos_update_request" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x209cc3ed, "snd_soc_info_volsw" },
	{ 0xdd37e2f9, "snd_pcm_hw_rule_add" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x56c3d0fa, "platform_get_irq_byname" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x668b595, "_kstrtoul" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xb10a1de3, "sdma_pcm_platform_register" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x5827c056, "clk_get" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0x1f5fc4a5, "cpu_latency_qos_request_active" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0xe9c616de, "cpu_latency_qos_add_request" },
	{ 0x81123cd3, "devm_ioremap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xed04c619, "snd_soc_add_dai_controls" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7a48d06c, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-ti-sdma");

MODULE_ALIAS("of:N*T*Cti,omap2420-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap2420-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap2430-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap3-mcbspC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbsp");
MODULE_ALIAS("of:N*T*Cti,omap4-mcbspC*");
