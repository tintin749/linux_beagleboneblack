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
	{ 0x81fed507, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xf2af389d, "sock_init_data" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa7b3181c, "up_read" },
	{ 0x43145f74, "page_address" },
	{ 0xcfefcee7, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x4ab89d75, "sock_no_getname" },
	{ 0xfffa3100, "sg_next" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0xbdb9c4e, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xf3288c43, "sock_no_mmap" },
	{ 0x141e0b83, "sock_no_recvmsg" },
	{ 0x5f754e5a, "memset" },
	{ 0x8fde8328, "sock_no_socketpair" },
	{ 0xd73f4af1, "sk_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0x50b82cba, "iov_iter_get_pages" },
	{ 0x47a1c17c, "sock_no_listen" },
	{ 0x558e9a84, "sock_wake_async" },
	{ 0x951425dc, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x89f8b90c, "sock_kfree_s" },
	{ 0xf891c1c7, "sock_no_shutdown" },
	{ 0xe864a95a, "module_put" },
	{ 0xf5b7e6e7, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x86cb1e85, "proto_register" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x65c57ee7, "sock_register" },
	{ 0xd16d7288, "proto_unregister" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0xd82dd4e0, "sock_kmalloc" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x44b38fb1, "sock_no_connect" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x6cfbca92, "sock_no_sendmsg" },
	{ 0x2a7c3ef2, "sock_kzfree_s" },
	{ 0xa3681163, "iov_iter_advance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6bc1fa29, "__put_page" },
	{ 0x50992cef, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");

