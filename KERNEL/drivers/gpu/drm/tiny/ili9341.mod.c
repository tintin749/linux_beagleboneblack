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
	{ 0x5188360, "mipi_dbi_debugfs_init" },
	{ 0xc134d1f3, "drm_release" },
	{ 0xb2181b28, "drm_open" },
	{ 0x7af03d47, "drm_gem_cma_mmap" },
	{ 0x1679b0fa, "drm_ioctl" },
	{ 0x190f604f, "drm_poll" },
	{ 0xc1779092, "drm_read" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x6caf9f18, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0xda6292a, "mipi_dbi_pipe_update" },
	{ 0xc92fe0a7, "mipi_dbi_pipe_disable" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xe332195e, "drm_dev_printk" },
	{ 0xf3290161, "drm_fbdev_generic_setup" },
	{ 0x97816cbd, "drm_dev_register" },
	{ 0x65914651, "drm_mode_config_reset" },
	{ 0xa68798c8, "mipi_dbi_dev_init" },
	{ 0xd87ba7b3, "mipi_dbi_spi_init" },
	{ 0x760dd9c8, "device_property_read_u32_array" },
	{ 0xf26d8da4, "devm_of_find_backlight" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0xed650883, "__devm_drm_dev_alloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x8ce20177, "mipi_dbi_enable_flush" },
	{ 0xf9a482f9, "msleep" },
	{ 0x829ebc6e, "mipi_dbi_command_stackbuf" },
	{ 0xa70dd163, "mipi_dbi_poweron_conditional_reset" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x3a38c09e, "drm_dev_enter" },
	{ 0xbc440b20, "drm_dev_unplug" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbd785a5d, "drm_atomic_helper_shutdown" },
};

MODULE_INFO(depends, "drm_mipi_dbi");

MODULE_ALIAS("spi:yx240qv29");
MODULE_ALIAS("of:N*T*Cadafruit,yx240qv29");
MODULE_ALIAS("of:N*T*Cadafruit,yx240qv29C*");
