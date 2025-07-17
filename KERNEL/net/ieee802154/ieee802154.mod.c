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
	{ 0x501cec73, "class_find_device" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xdb111b23, "get_net_ns_by_fd" },
	{ 0x20b6692c, "register_pernet_device" },
	{ 0x4ae4635, "trace_handle_return" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5fd534e6, "dev_change_net_namespace" },
	{ 0x405d470c, "dev_get_by_name" },
	{ 0xf7f3e98b, "device_match_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x31b0dc93, "trace_event_buffer_reserve" },
	{ 0xb9b9a7ea, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x73e5201a, "__put_net" },
	{ 0xb568842c, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9d1bc72, "dev_set_mac_address" },
	{ 0xb96022f3, "device_del" },
	{ 0x18c34ba0, "bpf_trace_run1" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf796e629, "unregister_pernet_device" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4a75ae6e, "class_unregister" },
	{ 0x5969778, "trace_event_reg" },
	{ 0xf687108, "nla_put" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xab722f50, "dev_get_by_index" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xb4aec65, "init_net" },
	{ 0x929b994a, "__class_register" },
	{ 0xce27df64, "perf_trace_run_bpf_submit" },
	{ 0x40a7acf, "__dev_get_by_index" },
	{ 0xaaecf75d, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5bf70814, "class_for_each_device" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0x97a46290, "trace_event_ignore_this_pid" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x2368beb3, "trace_event_buffer_commit" },
	{ 0xcfda63f4, "device_rename" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x607c184d, "get_device" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x2361d95b, "event_triggers_call" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x66a06d37, "bpf_trace_run2" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xe9134b56, "trace_event_raw_init" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0x6cdc5c6b, "nla_strlcpy" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x49970de8, "finish_wait" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb13e81a9, "trace_raw_output_prep" },
	{ 0xb39c7cf9, "trace_seq_printf" },
	{ 0x628221ba, "trace_output_call" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xaffc5da3, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

