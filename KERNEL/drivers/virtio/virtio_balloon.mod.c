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
	{ 0xd4cfd7f, "kill_anon_super" },
	{ 0xb08b0bd0, "unregister_virtio_driver" },
	{ 0x760e56a5, "register_virtio_driver" },
	{ 0xe3b186b7, "page_reporting_register" },
	{ 0x622c7922, "register_oom_notifier" },
	{ 0x64d03ddd, "register_shrinker" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9c17b27b, "virtqueue_get_vring_size" },
	{ 0xbb814f21, "balloon_aops" },
	{ 0x8c6b0f86, "alloc_anon_inode" },
	{ 0xa888ac53, "kern_mount" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2feb932c, "balloon_page_enqueue" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x1247e68e, "balloon_page_alloc" },
	{ 0xc617f82c, "unregister_oom_notifier" },
	{ 0xfdf58216, "unregister_shrinker" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x69b86c85, "page_reporting_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xeadd0ffa, "kern_unmount" },
	{ 0xe21b3165, "iput" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4d438c9a, "vm_event_states" },
	{ 0x3cbec7bd, "__ClearPageMovable" },
	{ 0xa319330, "__SetPageMovable" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xd3f8f3f4, "page_poisoning_enabled" },
	{ 0x9d247e3d, "init_on_free" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x266d8582, "adjust_managed_page_count" },
	{ 0xd6ec2a1d, "virtio_check_driver_offered_feature" },
	{ 0x9d706772, "balloon_page_dequeue" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0xf18c41ee, "mem_map" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x18b732a2, "vm_node_stat" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x7278d328, "all_vm_events" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0x91452968, "_dev_err" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x43145f74, "page_address" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xdcc47fd7, "init_pseudo" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x94aa83e2, "virtqueue_add_inbuf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xadb4445f, "virtqueue_get_buf" },
	{ 0x113e4ad8, "virtqueue_kick" },
	{ 0x8462dabb, "virtqueue_add_outbuf" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000005v*");
