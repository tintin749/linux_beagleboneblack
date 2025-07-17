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
	{ 0x618727d6, "param_ops_bool" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xfbaecf3c, "misc_deregister" },
	{ 0xe6d42467, "misc_register" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xe0a2d80, "_copy_from_iter_full" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x738c0b10, "skb_put" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x66d4739b, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0xaed7b306, "hci_unregister_dev" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "A78187D837ED7C73ADC0A89");
