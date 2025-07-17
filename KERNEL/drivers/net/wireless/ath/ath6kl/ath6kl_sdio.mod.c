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
	{ 0xc6eeef8d, "ath6kl_core_destroy" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x4e574d88, "ath6kl_hif_intr_bh_handler" },
	{ 0x821ac6a8, "ath6kl_core_cleanup" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x91cfb84a, "ath6kl_hif_rw_comp_handler" },
	{ 0x9146906a, "ath6kl_core_create" },
	{ 0x2b8bc07d, "sdio_writesb" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x2f6dfc86, "mmc_wait_for_cmd" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x51e77c97, "pfn_valid" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xfa7533e6, "sdio_get_host_pm_caps" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x6d5c6722, "mmc_wait_for_req" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x5f754e5a, "memset" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf04cdb82, "mmc_set_data_timeout" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xe5e27488, "ath6kl_cfg80211_suspend" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7f6abac6, "sdio_readsb" },
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0x2b3d92a6, "sdio_set_host_pm_flags" },
	{ 0x4fc62cdb, "ath6kl_cfg80211_resume" },
	{ 0x49cff5cf, "ath6kl_stop_txrx" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x58e2f536, "ath6kl_core_init" },
	{ 0x1000e51, "schedule" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x459253a9, "sdio_memcpy_toio" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0xe2393dc3, "sdio_memcpy_fromio" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x2b32fd4d, "sdio_release_host" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");
MODULE_ALIAS("sdio:c*v0271d0402*");
MODULE_ALIAS("sdio:c*v0271d0418*");
MODULE_ALIAS("sdio:c*v0271d0419*");
