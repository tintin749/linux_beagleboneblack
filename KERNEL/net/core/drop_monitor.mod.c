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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfa477aa1, "genl_unregister_family" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd8deaa57, "genl_register_family" },
	{ 0xc5850110, "printk" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0x738c0b10, "skb_put" },
	{ 0xee22163, "nla_put_64bit" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x97255bdf, "strlen" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0xe8527d70, "netlink_unicast" },
	{ 0xf687108, "nla_put" },
	{ 0x17f074e8, "netlink_broadcast" },
	{ 0xb4aec65, "init_net" },
	{ 0xe3103ab5, "tracepoint_probe_register" },
	{ 0x9ca91af4, "__tracepoint_devlink_trap_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x50992cef, "try_module_get" },
	{ 0xe864a95a, "module_put" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf2ee7a43, "synchronize_srcu" },
	{ 0x7f205428, "tracepoint_srcu" },
	{ 0x6772866f, "__tracepoint_kfree_skb" },
	{ 0x692037b7, "tracepoint_probe_unregister" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x7cc02d9, "__tracepoint_napi_poll" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4fad61, "consume_skb" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x75a38389, "skb_clone" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x5f754e5a, "memset" },
	{ 0x49839f80, "nla_reserve" },
	{ 0xbefdb4e9, "genlmsg_put" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x22ddeae9, "__nla_reserve_nohdr" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x24d273d1, "add_timer" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x84b183ae, "strncmp" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

