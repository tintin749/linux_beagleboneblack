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
	{ 0xabadaed0, "drm_gem_cma_dumb_create" },
	{ 0xfd767b2, "drm_gem_prime_mmap" },
	{ 0xadaf725b, "drm_gem_cma_prime_import_sg_table_vmap" },
	{ 0x7de129b, "drm_gem_prime_fd_to_handle" },
	{ 0xdac67d69, "drm_gem_prime_handle_to_fd" },
	{ 0xb153b359, "drm_gem_cma_create_object_default_funcs" },
	{ 0xc134d1f3, "drm_release" },
	{ 0xb2181b28, "drm_open" },
	{ 0x7af03d47, "drm_gem_cma_mmap" },
	{ 0x1679b0fa, "drm_ioctl" },
	{ 0x190f604f, "drm_poll" },
	{ 0xc1779092, "drm_read" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x6caf9f18, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0x8fdab0a2, "drm_atomic_helper_connector_destroy_state" },
	{ 0xa125d2e6, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x3d1f3a93, "drm_connector_cleanup" },
	{ 0xef37252f, "drm_helper_probe_single_connector_modes" },
	{ 0x45122fa9, "drm_atomic_helper_connector_reset" },
	{ 0x4b987f70, "drm_atomic_helper_commit" },
	{ 0xa0e84561, "drm_atomic_helper_check" },
	{ 0x452cad65, "drm_gem_fb_create_with_dirty" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0xffaf70e7, "gpiod_get_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5c1d6715, "dma_buf_end_cpu_access" },
	{ 0x92d6455a, "drm_fb_xrgb8888_to_gray8" },
	{ 0x14682dc6, "dma_buf_begin_cpu_access" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xd2f6d3a5, "thermal_zone_get_temp" },
	{ 0x3a38c09e, "drm_dev_enter" },
	{ 0xe16888ea, "drm_fb_cma_get_gem_obj" },
	{ 0x8e3aaa50, "drm_atomic_helper_damage_merged" },
	{ 0xd653b126, "sched_clock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0xf3290161, "drm_fbdev_generic_setup" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x97816cbd, "drm_dev_register" },
	{ 0x65914651, "drm_mode_config_reset" },
	{ 0xdeb987f9, "drm_simple_display_pipe_init" },
	{ 0x8a42a7a8, "drm_connector_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xe332195e, "drm_dev_printk" },
	{ 0x5ed80c03, "thermal_zone_get_zone_by_name" },
	{ 0xcbcbead6, "device_property_read_string" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0x8e3a5514, "drmm_mode_config_init" },
	{ 0xed650883, "__devm_drm_dev_alloc" },
	{ 0x793bd76c, "dma_set_coherent_mask" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xeb27c785, "dma_set_mask" },
	{ 0x53680759, "device_get_match_data" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x2c44a296, "drm_mode_probed_add" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0xac455af0, "drm_mode_duplicate" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xbc440b20, "drm_dev_unplug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbd785a5d, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");
