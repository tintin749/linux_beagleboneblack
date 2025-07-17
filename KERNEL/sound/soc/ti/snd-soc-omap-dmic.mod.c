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
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x524b0bc7, "snd_soc_dai_active" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x33cd2cd6, "cpu_latency_qos_update_request" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xb10a1de3, "sdma_pcm_platform_register" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x5827c056, "clk_get" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0x1f5fc4a5, "cpu_latency_qos_request_active" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x7a48d06c, "cpu_latency_qos_remove_request" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-ti-sdma");

MODULE_ALIAS("of:N*T*Cti,omap4-dmic");
MODULE_ALIAS("of:N*T*Cti,omap4-dmicC*");
