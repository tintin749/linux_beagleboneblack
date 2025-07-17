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
	{ 0xc134d1f3, "drm_release" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x97816cbd, "drm_dev_register" },
	{ 0xd2a9e6aa, "drm_mode_config_helper_resume" },
	{ 0x65914651, "drm_mode_config_reset" },
	{ 0x45122fa9, "drm_atomic_helper_connector_reset" },
	{ 0xec0cf1ae, "drm_gem_shmem_create_object_cached" },
	{ 0xa7b48f6e, "drm_gem_prime_import_dev" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xef37252f, "drm_helper_probe_single_connector_modes" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xec12af74, "__drm_dbg" },
	{ 0x3d1f3a93, "drm_connector_cleanup" },
	{ 0x6628b6e0, "drm_do_get_edid" },
	{ 0xdeb987f9, "drm_simple_display_pipe_init" },
	{ 0xa125d2e6, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x78520717, "usb_get_descriptor" },
	{ 0xf3290161, "drm_fbdev_generic_setup" },
	{ 0x46cf2152, "drm_connector_update_edid_property" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x2b7066b8, "drm_gem_shmem_prime_import_sg_table" },
	{ 0xed650883, "__devm_drm_dev_alloc" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x452cad65, "drm_gem_fb_create_with_dirty" },
	{ 0xf0ef52e8, "down" },
	{ 0xc1779092, "drm_read" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x8e3aaa50, "drm_atomic_helper_damage_merged" },
	{ 0xcfd436b4, "drm_add_edid_modes" },
	{ 0xd93f779e, "usb_intf_get_dma_device" },
	{ 0xe27d06b6, "drm_mode_config_helper_suspend" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8a42a7a8, "drm_connector_init" },
	{ 0xbc440b20, "drm_dev_unplug" },
	{ 0x1031f850, "drm_gem_shmem_vunmap" },
	{ 0x7de129b, "drm_gem_prime_fd_to_handle" },
	{ 0x14682dc6, "dma_buf_begin_cpu_access" },
	{ 0x1679b0fa, "drm_ioctl" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x9e2b488a, "drm_gem_mmap" },
	{ 0x8fdab0a2, "drm_atomic_helper_connector_destroy_state" },
	{ 0xa0e84561, "drm_atomic_helper_check" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x4b987f70, "drm_atomic_helper_commit" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x8e3a5514, "drmm_mode_config_init" },
	{ 0xdac67d69, "drm_gem_prime_handle_to_fd" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x581cde4e, "up" },
	{ 0x6caf9f18, "drm_gem_fb_simple_display_pipe_prepare_fb" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xfd767b2, "drm_gem_prime_mmap" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe7eebef0, "drm_gem_shmem_dumb_create" },
	{ 0x5c1d6715, "dma_buf_end_cpu_access" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0x72ee9928, "drm_kms_helper_poll_init" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x8b5927a0, "down_timeout" },
	{ 0xea6aa28f, "drm_gem_shmem_vmap" },
	{ 0x190f604f, "drm_poll" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xb2181b28, "drm_open" },
	{ 0xede82d11, "drm_kms_helper_poll_fini" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");
