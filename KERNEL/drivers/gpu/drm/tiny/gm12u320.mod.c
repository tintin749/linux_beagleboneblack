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
	{ 0x618727d6, "param_ops_bool" },
	{ 0xe7eebef0, "drm_gem_shmem_dumb_create" },
	{ 0xfd767b2, "drm_gem_prime_mmap" },
	{ 0x2b7066b8, "drm_gem_shmem_prime_import_sg_table" },
	{ 0x7de129b, "drm_gem_prime_fd_to_handle" },
	{ 0xdac67d69, "drm_gem_prime_handle_to_fd" },
	{ 0xc134d1f3, "drm_release" },
	{ 0xb2181b28, "drm_open" },
	{ 0x9e2b488a, "drm_gem_mmap" },
	{ 0x1679b0fa, "drm_ioctl" },
	{ 0x190f604f, "drm_poll" },
	{ 0xc1779092, "drm_read" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x8fdab0a2, "drm_atomic_helper_connector_destroy_state" },
	{ 0xa125d2e6, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x3d1f3a93, "drm_connector_cleanup" },
	{ 0xef37252f, "drm_helper_probe_single_connector_modes" },
	{ 0x45122fa9, "drm_atomic_helper_connector_reset" },
	{ 0x4b987f70, "drm_atomic_helper_commit" },
	{ 0xa0e84561, "drm_atomic_helper_check" },
	{ 0x452cad65, "drm_gem_fb_create_with_dirty" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xd2a9e6aa, "drm_mode_config_helper_resume" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf3290161, "drm_fbdev_generic_setup" },
	{ 0x97816cbd, "drm_dev_register" },
	{ 0x65914651, "drm_mode_config_reset" },
	{ 0xdeb987f9, "drm_simple_display_pipe_init" },
	{ 0x8a42a7a8, "drm_connector_init" },
	{ 0x9d669763, "memcpy" },
	{ 0x5afe342e, "drmm_kmalloc" },
	{ 0x8e3a5514, "drmm_mode_config_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd93f779e, "usb_intf_get_dma_device" },
	{ 0xed650883, "__devm_drm_dev_alloc" },
	{ 0xcfd436b4, "drm_add_edid_modes" },
	{ 0x46cf2152, "drm_connector_update_edid_property" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0xe332195e, "drm_dev_printk" },
	{ 0x3ecd4b8f, "usb_bulk_msg" },
	{ 0x1031f850, "drm_gem_shmem_vunmap" },
	{ 0x5c1d6715, "dma_buf_end_cpu_access" },
	{ 0x14682dc6, "dma_buf_begin_cpu_access" },
	{ 0xea6aa28f, "drm_gem_shmem_vmap" },
	{ 0xa7b48f6e, "drm_gem_prime_import_dev" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8e3aaa50, "drm_atomic_helper_damage_merged" },
	{ 0xee824ed8, "drm_mode_object_put" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x483f99c0, "drm_mode_object_get" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbd785a5d, "drm_atomic_helper_shutdown" },
	{ 0xbc440b20, "drm_dev_unplug" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe27d06b6, "drm_mode_config_helper_suspend" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1DE1pC102d*dc*dsc*dp*ic*isc*ip*in*");
