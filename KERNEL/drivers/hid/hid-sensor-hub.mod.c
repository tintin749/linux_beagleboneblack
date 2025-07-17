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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xbc321a2b, "hid_open_report" },
	{ 0x293869b2, "mfd_remove_devices" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x292a31e8, "__hid_request" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd2e3c842, "hid_hw_close" },
	{ 0xa6b6b9b6, "mfd_add_devices" },
	{ 0x4a791910, "hid_hw_open" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xca11f91e, "hid_set_field" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x34371cb2, "hid_hw_stop" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x217b3acb, "__hid_register_driver" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0x6e5ed021, "hid_hw_start" },
	{ 0x122f8b49, "hid_unregister_driver" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b*g0003v*p*");
