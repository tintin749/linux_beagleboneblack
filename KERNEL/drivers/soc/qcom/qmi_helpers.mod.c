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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xfe9ffd7c, "kernel_sendmsg" },
	{ 0x97255bdf, "strlen" },
	{ 0x761d04d1, "sock_release" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x1a715715, "sock_create_kern" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5f754e5a, "memset" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xf86f27cd, "idr_alloc_cyclic" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x88f2f017, "kernel_getsockname" },
	{ 0xb4aec65, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa346975c, "idr_remove" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1381c77f, "kernel_recvmsg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x47925794, "idr_find" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "");

