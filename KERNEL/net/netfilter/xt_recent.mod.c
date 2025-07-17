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
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0xffc948a3, "seq_release_private" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x1b206cd0, "seq_read" },
	{ 0xa215a72e, "xt_unregister_matches" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0xc873d80c, "xt_register_matches" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xa3131f6, "strnchr" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x71c90087, "memcmp" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x41bcd625, "proc_set_user" },
	{ 0x2a7d81, "proc_create_data" },
	{ 0x7c8366c9, "make_kgid" },
	{ 0x8d7f5d84, "make_kuid" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x17ddc3fc, "__do_once_done" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa5122a9e, "proc_mkdir" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xab6d656, "seq_putc" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xda893db2, "PDE_DATA" },
	{ 0x6f50bc2f, "__seq_open_private" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
};

MODULE_INFO(depends, "");

