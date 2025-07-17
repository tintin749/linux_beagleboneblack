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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x524b0bc7, "snd_soc_dai_active" },
	{ 0x1721fe82, "udma_pcm_platform_register" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xa3e60944, "snd_pcm_stop_xrun" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0xfed19014, "dma_request_chan" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb9b64df, "snd_pcm_hw_constraint_list" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0x84b183ae, "strncmp" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x91452968, "_dev_err" },
	{ 0xe39d847f, "edma_pcm_platform_register" },
	{ 0x69257c1c, "devm_kmemdup" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xdd37e2f9, "snd_pcm_hw_rule_add" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x56c3d0fa, "platform_get_irq_byname" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0x9b126258, "of_get_property" },
	{ 0xb10a1de3, "sdma_pcm_platform_register" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x5827c056, "clk_get" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0xc616a3e6, "dma_release_channel" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0xc1609fa6, "snd_pcm_hw_constraint_minmax" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa23f9822, "of_parse_phandle_with_args" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3c22a869, "of_property_match_string" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-ti-udma,snd-soc-ti-edma,snd-soc-ti-sdma");

MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dm646x-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,da830-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,am33xx-mcasp-audioC*");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audio");
MODULE_ALIAS("of:N*T*Cti,dra7-mcasp-audioC*");
