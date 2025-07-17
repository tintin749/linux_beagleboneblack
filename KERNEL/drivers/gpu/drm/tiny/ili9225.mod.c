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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xe1ef6035, "mipi_dbi_hw_reset" },
	{ 0x8e3aaa50, "drm_atomic_helper_damage_merged" },
	{ 0x91452968, "_dev_err" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0xa61fe30, "mipi_dbi_buf_copy" },
	{ 0x3a38c09e, "drm_dev_enter" },
	{ 0xe16888ea, "drm_fb_cma_get_gem_obj" },
	{ 0xf9a482f9, "msleep" },
	{ 0x692397ab, "mipi_dbi_command_buf" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe332195e, "drm_dev_printk" },
	{ 0xf3290161, "drm_fbdev_generic_setup" },
	{ 0x97816cbd, "drm_dev_register" },
	{ 0x65914651, "drm_mode_config_reset" },
	{ 0xa68798c8, "mipi_dbi_dev_init" },
	{ 0xd87ba7b3, "mipi_dbi_spi_init" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0x8c471d94, "devm_gpiod_get" },
	{ 0xed650883, "__devm_drm_dev_alloc" },
	{ 0x6c955d03, "mipi_dbi_spi_transfer" },
	{ 0x46c311f4, "mipi_dbi_spi_cmd_max_speed" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xbc440b20, "drm_dev_unplug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbd785a5d, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm_mipi_dbi");

MODULE_ALIAS("spi:v220hf01a-t");
MODULE_ALIAS("of:N*T*Cvot,v220hf01a-t");
MODULE_ALIAS("of:N*T*Cvot,v220hf01a-tC*");
