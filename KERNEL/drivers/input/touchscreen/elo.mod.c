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
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x47c19580, "input_register_device" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0x82b34dd1, "serio_open" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x20496c04, "input_free_device" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc37335b0, "complete" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xf144f336, "input_event" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcb540d1a, "serio_close" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x607c184d, "get_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr29id*ex*");
