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
	{ 0xfac0d797, "__serdev_device_driver_register" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x4e669af8, "serdev_device_open" },
	{ 0x815588a6, "clk_enable" },
	{ 0x91452968, "_dev_err" },
	{ 0x3af14d12, "hci_register_dev" },
	{ 0x4fe967a1, "pm_runtime_no_callbacks" },
	{ 0xcadd0589, "pinctrl_select_state" },
	{ 0x22a372e8, "devm_gpiod_put" },
	{ 0xf9a482f9, "msleep" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9078b0b9, "hci_alloc_dev" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x60c57d49, "pinctrl_lookup_state" },
	{ 0xc2a8ef96, "devm_pinctrl_get" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x1a7d4790, "devm_clk_get_optional" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0xaf264c93, "of_device_get_match_data" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x81fd7db5, "serdev_device_wait_until_sent" },
	{ 0x5200fdbf, "serdev_device_set_flow_control" },
	{ 0xcbad3000, "serdev_device_set_baudrate" },
	{ 0xaf4c5fc2, "__hci_cmd_sync" },
	{ 0x718b8b7, "bt_info" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xfb0f7183, "__hci_cmd_send" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x233cd691, "pskb_expand_head" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x9d669763, "memcpy" },
	{ 0x738c0b10, "skb_put" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x491f9c41, "hci_recv_frame" },
	{ 0x75a38389, "skb_clone" },
	{ 0x68f8d8ba, "skb_queue_head" },
	{ 0x80fd8317, "skb_pull" },
	{ 0xf0346c8f, "serdev_device_write_buf" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8cbc0ee, "serdev_device_close" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x6c7f6cf0, "serdev_device_write_flush" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0x52aa7f9c, "hci_free_dev" },
	{ 0xaed7b306, "hci_unregister_dev" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("of:N*T*Cmediatek,mt7622-bluetooth");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-bluetoothC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7663u-bluetooth");
MODULE_ALIAS("of:N*T*Cmediatek,mt7663u-bluetoothC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7668u-bluetooth");
MODULE_ALIAS("of:N*T*Cmediatek,mt7668u-bluetoothC*");

MODULE_INFO(srcversion, "187367FF24518EBFDB27F5F");
