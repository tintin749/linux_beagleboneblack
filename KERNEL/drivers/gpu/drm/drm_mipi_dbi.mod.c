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
	{ 0xf9a482f9, "msleep" },
	{ 0x83d2a225, "single_open" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x45122fa9, "drm_atomic_helper_connector_reset" },
	{ 0xeb27c785, "dma_set_mask" },
	{ 0x29762e0c, "single_release" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xef37252f, "drm_helper_probe_single_connector_modes" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x22a0f031, "drm_fb_swab" },
	{ 0x97106714, "memdup_user_nul" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x59dc4ec8, "drm_fb_memcpy" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x3d1f3a93, "drm_connector_cleanup" },
	{ 0xdeb987f9, "drm_simple_display_pipe_init" },
	{ 0xa125d2e6, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x9ce050be, "drm_mode_copy" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xac455af0, "drm_mode_duplicate" },
	{ 0x66d301f3, "drm_gem_fb_get_obj" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x452cad65, "drm_gem_fb_create_with_dirty" },
	{ 0x8e3aaa50, "drm_atomic_helper_damage_merged" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8a42a7a8, "drm_connector_init" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x14682dc6, "dma_buf_begin_cpu_access" },
	{ 0xe332195e, "drm_dev_printk" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8fdab0a2, "drm_atomic_helper_connector_destroy_state" },
	{ 0xa0e84561, "drm_atomic_helper_check" },
	{ 0x4b987f70, "drm_atomic_helper_commit" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4f18a150, "__drm_debug" },
	{ 0x8e3a5514, "drmm_mode_config_init" },
	{ 0x4e095f11, "drm_get_format_name" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2c44a296, "drm_mode_probed_add" },
	{ 0x5c1d6715, "dma_buf_end_cpu_access" },
	{ 0x92c5cdc8, "drm_plane_enable_fb_damage_clips" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x3a38c09e, "drm_dev_enter" },
	{ 0x92340566, "drm_fb_xrgb8888_to_rgb565" },
	{ 0x96d80527, "regulator_enable" },
};

MODULE_INFO(depends, "");

