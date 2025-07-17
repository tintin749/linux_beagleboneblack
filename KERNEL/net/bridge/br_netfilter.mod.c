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
	{ 0x941fb759, "pskb_trim_rcsum_slow" },
	{ 0xc6060759, "skb_ext_add" },
	{ 0x91637e86, "unregister_net_sysctl_table" },
	{ 0xa8b9d616, "ip_do_fragment" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xac0af05c, "dst_release" },
	{ 0x28908645, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0x422678a0, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x2ffeae01, "nf_hook_slow" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x7bd1b533, "br_dev_queue_push_xmit" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xb4aec65, "init_net" },
	{ 0xd0e47a13, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0xe4ecf487, "ip_route_input_noref" },
	{ 0xd7d8888b, "nf_ipv6_ops" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x3341c6d0, "skb_pull_rcsum" },
	{ 0x9b271af3, "ip_route_output_flow" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xf8912d2a, "nf_br_ops" },
	{ 0x42fa7c1d, "__skb_ext_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xebaf63be, "br_handle_frame_finish" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xefbdf2e3, "register_net_sysctl" },
};

MODULE_INFO(depends, "bridge");

