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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x507202b4, "usb_gstrings_attach" },
	{ 0x3337b29, "usb_free_all_descriptors" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0x15922938, "g_audio_cleanup" },
	{ 0x4b2d6806, "u_audio_start_capture" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdf0dd7b, "usb_function_unregister" },
	{ 0x78f0c107, "usb_put_function_instance" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe9e256b4, "usb_ep_autoconfig" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x56ab0610, "config_group_init_type_name" },
	{ 0x91452968, "_dev_err" },
	{ 0xcf4a1074, "g_audio_setup" },
	{ 0xcfe420d9, "usb_function_register" },
	{ 0x830c4afa, "u_audio_stop_playback" },
	{ 0xd60a139b, "u_audio_stop_capture" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd2f8278, "u_audio_start_playback" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xb49854ee, "usb_assign_descriptors" },
	{ 0xd5f4f47b, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "u_audio");

