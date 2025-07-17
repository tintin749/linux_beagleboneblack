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
	{ 0xdea5210f, "ieee802154_register_hw" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x6cd2ad10, "ieee802154_alloc_hw" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0x65931410, "devm_gpio_request_one" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x91452968, "_dev_err" },
	{ 0xa8ec7d34, "crc_ccitt" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x482ab980, "ieee802154_rx_irqsafe" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x858845ea, "gpiod_get_raw_value" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xdd34d266, "of_find_property" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc37335b0, "complete" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8c92efa, "ieee802154_free_hw" },
	{ 0xf4079591, "ieee802154_unregister_hw" },
	{ 0x92b57248, "flush_work" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");
