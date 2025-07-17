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
	{ 0xdff14d72, "serio_unregister_driver" },
	{ 0xf49bf910, "__serio_register_driver" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x9c73041c, "iforce_init_device" },
	{ 0x82b34dd1, "serio_open" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xd840e459, "iforce_process_packet" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d669763, "memcpy" },
	{ 0x44d5f8f9, "iforce_send_packet" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb540d1a, "serio_close" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "iforce");

MODULE_ALIAS("serio:ty02pr1Did*ex*");
