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
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x45993567, "debugfs_create_devm_seqfile" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x9d669763, "memcpy" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xdea5210f, "ieee802154_register_hw" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x6cd2ad10, "ieee802154_alloc_hw" },
	{ 0x91452968, "_dev_err" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x482ab980, "ieee802154_rx_irqsafe" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0xc37335b0, "complete" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xea4a09cb, "mod_delayed_work_on" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x12a38747, "usleep_range" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0x8c92efa, "ieee802154_free_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xf4079591, "ieee802154_unregister_hw" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("spi:adf7242");
MODULE_ALIAS("spi:adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7242");
MODULE_ALIAS("of:N*T*Cadi,adf7242C*");
MODULE_ALIAS("of:N*T*Cadi,adf7241");
MODULE_ALIAS("of:N*T*Cadi,adf7241C*");
