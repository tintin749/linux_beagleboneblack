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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x81fed507, "release_sock" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xcfefcee7, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x75a38389, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf2d5d4fa, "sock_queue_rcv_skb" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xadab7e8c, "init_user_ns" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0xe6d42467, "misc_register" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xc398c59, "sock_no_accept" },
	{ 0x951425dc, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe864a95a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x65c57ee7, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xd5d50274, "__put_cred" },
	{ 0x59b1d8a0, "ns_capable_noaudit" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x49871971, "_raw_write_unlock_bh" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xa5a91711, "_raw_write_lock_bh" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4fad61, "consume_skb" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xfbaecf3c, "misc_deregister" },
	{ 0x50992cef, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56B028DDBE5F739235B2DAD");
