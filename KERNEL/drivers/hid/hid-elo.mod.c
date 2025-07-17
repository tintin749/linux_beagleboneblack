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
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x91452968, "_dev_err" },
	{ 0x7e9f1d74, "usb_hub_find_child" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x6ad34cf0, "usb_hid_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf144f336, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");
