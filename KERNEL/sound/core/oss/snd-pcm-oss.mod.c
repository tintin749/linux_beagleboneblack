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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x5d20f29e, "snd_card_file_remove" },
	{ 0xdce08c8, "snd_pcm_release_substream" },
	{ 0x52b169a1, "snd_pcm_notify" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xf8de3908, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x2ea0ec2f, "snd_pcm_hw_refine" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0x5f754e5a, "memset" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8e2b0ba3, "snd_pcm_hw_param_last" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x655b2d4f, "snd_pcm_mmap_data" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe89e25f9, "snd_mixer_oss_ioctl_card" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xe864a95a, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x7625224f, "snd_card_file_add" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5e1c649c, "snd_pcm_stream_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x83fba604, "snd_pcm_stream_unlock_irq" },
	{ 0xb79d4a1a, "snd_register_oss_device" },
	{ 0xa6fa1b62, "snd_pcm_open_substream" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1df57d42, "snd_unregister_oss_device" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x1d8f13f5, "__snd_pcm_lib_xfer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x9d669763, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x17c55104, "snd_info_free_entry" },
	{ 0xceeee77a, "param_array_ops" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x20fda7ae, "snd_pcm_kernel_ioctl" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x1dd707be, "snd_info_register" },
	{ 0x4010319, "snd_pcm_hw_param_first" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-mixer-oss");

