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
	{ 0xdbb00ce2, "of_clk_add_provider" },
	{ 0x7b057681, "of_clk_src_simple_get" },
	{ 0x45ca6912, "clk_register_fixed_rate" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0xb048a0f9, "gpiod_unexport" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0xf9c63046, "gpiod_to_irq" },
	{ 0x2f129604, "gpiod_direction_output_raw" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x6cd2ad10, "ieee802154_alloc_hw" },
	{ 0x666e422d, "ieee802154_wake_queue" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc5f21212, "_dev_notice" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x76d1c604, "ieee802154_xmit_complete" },
	{ 0x482ab980, "ieee802154_rx_irqsafe" },
	{ 0x738c0b10, "skb_put" },
	{ 0xe3a24cdd, "ieee802154_hdr_push" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x8c92efa, "ieee802154_free_hw" },
	{ 0xf4079591, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x6ce1ae3a, "of_clk_del_provider" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x8934e9c8, "ieee802154_hdr_peek_addrs" },
	{ 0xc37335b0, "complete" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x76de1c18, "spi_async" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x91452968, "_dev_err" },
	{ 0x9d669763, "memcpy" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe0bc1b49, "_dev_crit" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "mac802154,ieee802154");

MODULE_ALIAS("of:N*T*Ccascoda,ca8210");
MODULE_ALIAS("of:N*T*Ccascoda,ca8210C*");

MODULE_INFO(srcversion, "C2B242E2CCE85B1E2DD89F9");
