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
	{ 0xcabecdf9, "xt_unregister_target" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0x91e0ddea, "xt_check_target" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4830a9ae, "nf_unregister_net_hooks" },
	{ 0x2820969, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x101c7c76, "xt_register_target" },
	{ 0xe864a95a, "module_put" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x21e5f982, "nf_register_net_hooks" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc979c35c, "nf_unregister_sockopt" },
	{ 0xce671dd5, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xebce4e20, "xt_check_match" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xa88c5135, "nf_register_sockopt" },
	{ 0x791093fe, "xt_find_match" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "");

