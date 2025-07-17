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
	{ 0x647fdcff, "snd_pcm_hw_constraint_step" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd22c9759, "snd_soc_unregister_card" },
	{ 0x91452968, "_dev_err" },
	{ 0x5e1c649c, "snd_pcm_stream_lock_irq" },
	{ 0x83fba604, "snd_pcm_stream_unlock_irq" },
	{ 0x232561eb, "devm_snd_soc_register_component" },
	{ 0xb10a1de3, "sdma_pcm_platform_register" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x36e806f7, "snd_pcm_stop" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x4751f04e, "snd_soc_register_card" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-ti-sdma");

