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
	{ 0x768318f3, "led_trigger_unregister" },
	{ 0x69babbf, "led_trigger_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaf8dfc5a, "sysfs_add_file_to_group" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xa23f9822, "of_parse_phandle_with_args" },
	{ 0xcab5a97b, "of_count_phandle_with_args" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x5b5d6946, "usb_of_get_device_node" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0x5b3f0818, "led_set_brightness" },
	{ 0x5b272462, "usb_for_each_dev" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x215d261e, "sysfs_remove_file_from_group" },
	{ 0xe1537255, "__list_del_entry_valid" },
};

MODULE_INFO(depends, "");

