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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x4c7040af, "unregister_qdisc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x65ac725f, "register_qdisc" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc602e74a, "softnet_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4fad61, "consume_skb" },
	{ 0x7a694121, "__neigh_event_send" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa0a18645, "__neigh_create" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x9d669763, "memcpy" },
	{ 0x89b799a6, "neigh_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x4dce47d8, "_raw_spin_trylock" },
	{ 0xd0079e21, "noop_qdisc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x3cdf9d98, "qdisc_reset" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

