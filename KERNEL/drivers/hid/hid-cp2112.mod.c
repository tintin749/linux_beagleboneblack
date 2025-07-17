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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x71b37f7c, "sysfs_create_group" },
	{ 0x6d910b29, "gpiochip_add_data_with_key" },
	{ 0xd718d606, "handle_simple_irq" },
	{ 0xf0ef52e8, "down" },
	{ 0xaf5a1516, "i2c_add_adapter" },
	{ 0x581cde4e, "up" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x5f754e5a, "memset" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xcb46da6, "sysfs_chmod_file" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x49970de8, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0x1b88f8aa, "gpiochip_remove" },
	{ 0x52f001e3, "gpiochip_free_own_desc" },
	{ 0xa12784f, "gpiochip_unlock_as_irq" },
	{ 0xf8da2880, "i2c_del_adapter" },
	{ 0x80ded878, "sysfs_remove_group" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000010C4p0000EA90");
