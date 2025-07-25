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
	{ 0xa84b5654, "register_netdevice" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0xa7b3181c, "up_read" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x717b120c, "bpf_prog_create" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x15f90688, "slhc_init" },
	{ 0x98171fcf, "device_destroy" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x43f9ebc8, "slhc_remember" },
	{ 0xf856a51f, "__register_chrdev" },
	{ 0x9efffd39, "bpf_prog_destroy" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xf36f42a9, "slhc_uncompress" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x73e5201a, "__put_net" },
	{ 0xc15bab23, "skb_scrub_packet" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xfb1d7438, "down_read" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xa168c1e2, "skb_copy_datagram_iter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x2820969, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x94519b74, "netdev_printk" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x8781d48, "device_create" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x7bcf8005, "fput" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x2a928918, "slhc_free" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xa346975c, "idr_remove" },
	{ 0xe864a95a, "module_put" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x65d411e9, "idr_get_next" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0xd653b126, "sched_clock" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xd216a0aa, "__dev_get_by_name" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xcee36288, "iov_iter_init" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x9984daee, "fget" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0xdcdc0040, "slhc_compress" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x738c0b10, "skb_put" },
	{ 0x47925794, "idr_find" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xbf451cca, "__class_create" },
	{ 0x74b8e674, "slhc_toss" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "slhc");

