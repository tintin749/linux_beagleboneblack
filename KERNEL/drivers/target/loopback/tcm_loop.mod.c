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
	{ 0x5741eb93, "scsi_change_queue_depth" },
	{ 0xfb28b81d, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0x5c000085, "target_register_template" },
	{ 0x8221889f, "driver_register" },
	{ 0x67f0e816, "bus_register" },
	{ 0x6eb21db9, "__root_device_register" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x8112492b, "device_register" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd87864c6, "target_setup_session" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x97255bdf, "strlen" },
	{ 0x32243c30, "scsi_add_device" },
	{ 0xe9251e73, "scsi_device_put" },
	{ 0x50fa7c5c, "scsi_remove_device" },
	{ 0xb20c8a0f, "scsi_device_lookup" },
	{ 0x9ed4a18, "root_device_unregister" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xbe1dc4b4, "transport_generic_free_cmd" },
	{ 0xe12f7db6, "target_execute_cmd" },
	{ 0x9d669763, "memcpy" },
	{ 0xc37335b0, "complete" },
	{ 0x110ef013, "scsi_add_host_with_dma" },
	{ 0x8f7c629d, "scsi_host_alloc" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xbf6689c, "scmd_printk" },
	{ 0xf65e14eb, "target_submit_cmd_map_sgls" },
	{ 0xb1dfa968, "target_put_sess_cmd" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xd4e74a96, "target_submit_tmr" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xd3949849, "scsi_host_put" },
	{ 0xec57b011, "scsi_remove_host" },
	{ 0xcc32e812, "device_unregister" },
	{ 0x71b9f948, "core_tpg_register" },
	{ 0x724b1d96, "core_tpg_deregister" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xd73592cb, "target_remove_session" },
	{ 0x98d41efc, "core_allocate_nexus_loss_ua" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "target_core_mod");

