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
	{ 0x9580e35e, "transport_class_register" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x24239d74, "scsi_remove_target" },
	{ 0xa4d109c0, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77c3a20, "scsi_flush_work" },
	{ 0xbac84e67, "blk_mq_run_hw_queues" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x2cd8dc3b, "transport_destroy_device" },
	{ 0xb50bc45c, "bsg_job_put" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xca76744a, "attribute_container_unregister" },
	{ 0x41c90efb, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xf39c10b5, "scsi_is_host_device" },
	{ 0x942f55eb, "bsg_job_get" },
	{ 0x5f754e5a, "memset" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xb96022f3, "device_del" },
	{ 0x5a3cd85f, "scsi_queue_work" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xf6a8a4b2, "transport_add_device" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x82a0f2d1, "transport_configure_device" },
	{ 0x84b183ae, "strncmp" },
	{ 0x80841b3b, "attribute_container_register" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfa6d327e, "sysfs_remove_link" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x9da6810, "transport_class_unregister" },
	{ 0xd3949849, "scsi_host_put" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x49dc6527, "sysfs_create_link" },
	{ 0x98509927, "scsi_target_unblock" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0xcd35bc0a, "scsi_host_get" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x1c9d7c68, "transport_setup_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x1ff41d56, "blk_mq_end_request" },
	{ 0x607c184d, "get_device" },
	{ 0x35c3f5f1, "__scsi_init_queue" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x1f9af971, "scsi_is_target_device" },
	{ 0x9f979362, "scsi_nl_sock" },
	{ 0x7fbb1518, "transport_remove_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xd8f4acb4, "scsi_target_block" },
	{ 0x75253d39, "bsg_job_done" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0xebcc2646, "bsg_remove_queue" },
	{ 0x18c4784e, "bsg_setup_queue" },
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0x8b39d220, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "");

