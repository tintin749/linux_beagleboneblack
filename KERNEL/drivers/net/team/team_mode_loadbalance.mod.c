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
	{ 0x83097f15, "team_mode_unregister" },
	{ 0x71533588, "team_mode_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x717b120c, "bpf_prog_create" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x9efffd39, "bpf_prog_destroy" },
	{ 0x6453751f, "team_options_unregister" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0x37a0cba, "kfree" },
	{ 0xbab7bce3, "team_options_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xbca3414a, "netpoll_send_skb" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xd653b126, "sched_clock" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0xef2f70b5, "bpf_stats_enabled_key" },
	{ 0x71c90087, "memcmp" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6ac5c777, "team_options_change_check" },
	{ 0xa91427de, "team_option_inst_set_change" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "team");

