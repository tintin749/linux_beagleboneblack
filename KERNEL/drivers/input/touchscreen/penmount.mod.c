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
	{ 0x47c19580, "input_register_device" },
	{ 0x82b34dd1, "serio_open" },
	{ 0x3e88d758, "input_mt_init_slots" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x20496c04, "input_free_device" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x79eaa49f, "input_mt_report_pointer_emulation" },
	{ 0xcfcef407, "input_mt_report_slot_state" },
	{ 0xf144f336, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0xcb540d1a, "serio_close" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr31id*ex*");
