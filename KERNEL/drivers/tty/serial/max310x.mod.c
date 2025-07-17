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
	{ 0xe6553add, "uart_unregister_driver" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0xf06e526e, "uart_register_driver" },
	{ 0xe97b7094, "uart_update_timeout" },
	{ 0x125c48f1, "uart_get_baud_rate" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x7b570a94, "uart_add_one_port" },
	{ 0xee53f79d, "spi_get_device_id" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x3e2410a, "__devm_regmap_init_spi" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x22b14b70, "uart_write_wakeup" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0x44f87b71, "do_SAK" },
	{ 0x59183ecf, "uart_try_toggle_sysrq" },
	{ 0x4a17ed66, "sysrq_mask" },
	{ 0x94f9d621, "uart_handle_cts_change" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0x1cdf819a, "uart_insert_char" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb1b74797, "regmap_update_bits_base" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x584aa20, "uart_remove_one_port" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x4bc28392, "uart_suspend_port" },
	{ 0xe24e5a10, "uart_resume_port" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0x563ad7c8, "regmap_read" },
	{ 0xc0fa51fc, "regmap_write" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:max3107");
MODULE_ALIAS("spi:max3108");
MODULE_ALIAS("spi:max3109");
MODULE_ALIAS("spi:max14830");
MODULE_ALIAS("of:N*T*Cmaxim,max3107");
MODULE_ALIAS("of:N*T*Cmaxim,max3107C*");
MODULE_ALIAS("of:N*T*Cmaxim,max3108");
MODULE_ALIAS("of:N*T*Cmaxim,max3108C*");
MODULE_ALIAS("of:N*T*Cmaxim,max3109");
MODULE_ALIAS("of:N*T*Cmaxim,max3109C*");
MODULE_ALIAS("of:N*T*Cmaxim,max14830");
MODULE_ALIAS("of:N*T*Cmaxim,max14830C*");
