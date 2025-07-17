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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa56c3c4b, "xt_unregister_table" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x91e0ddea, "xt_check_target" },
	{ 0xc873d80c, "xt_register_matches" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0x900f8840, "xt_proto_fini" },
	{ 0xcbc69128, "xt_table_unlock" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x1da3f1e5, "xt_find_table_lock" },
	{ 0xf2285318, "ipv6_find_hdr" },
	{ 0x555658cf, "xt_replace_table" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xc6298da9, "xt_proto_init" },
	{ 0x9b4113a0, "xt_register_table" },
	{ 0xd9bb821b, "xt_copy_counters" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb1b5155f, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0x2820969, "ns_capable" },
	{ 0x5a2b5e0b, "xt_register_targets" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x328a05f1, "strncpy" },
	{ 0x1d5cb256, "nf_log_trace" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x8f217990, "xt_unregister_targets" },
	{ 0xe864a95a, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc979c35c, "nf_unregister_sockopt" },
	{ 0xd2b30083, "xt_tee_enabled" },
	{ 0x8d733624, "xt_request_find_match" },
	{ 0x63e3e062, "xt_request_find_table_lock" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa215a72e, "xt_unregister_matches" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xce671dd5, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x9d669763, "memcpy" },
	{ 0xebce4e20, "xt_check_match" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa88c5135, "nf_register_sockopt" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x58cb686, "xt_match_to_user" },
	{ 0x4f792a3, "skb_copy_bits" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");

