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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf2ad80d9, "snd_pcm_create_iec958_consumer_hw_params" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xfe0cd377, "snd_pcm_hw_constraint_eld" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x99dae7fa, "snd_soc_dapm_add_routes" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3b9e006a, "snd_ctl_new1" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x275bd07c, "snd_pcm_add_chmap_ctls" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc0451674, "snd_soc_jack_report" },
	{ 0xb4bb0141, "snd_ctl_add" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");

