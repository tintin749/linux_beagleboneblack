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
	{ 0x16adbf67, "down_killable" },
	{ 0xe0256f8b, "nfc_digital_unregister_device" },
	{ 0xb0d87369, "regulator_disable" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa1f00de7, "skb_trim" },
	{ 0x5f754e5a, "memset" },
	{ 0xb4471bfe, "down_trylock" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x65931410, "devm_gpio_request_one" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x21cbb370, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3561afb0, "nfc_alloc_recv_skb" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xf3424c20, "of_get_named_gpio_flags" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x915c567a, "nfc_digital_register_device" },
	{ 0x9d669763, "memcpy" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0x581cde4e, "up" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xefc13bc6, "nfc_digital_free_device" },
	{ 0xc37335b0, "complete" },
	{ 0x738c0b10, "skb_put" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x61f90f46, "device_property_present" },
	{ 0x96d80527, "regulator_enable" },
	{ 0xac66f4be, "nfc_digital_allocate_device" },
};

MODULE_INFO(depends, "nfc_digital,nfc");

MODULE_ALIAS("of:N*T*Cst,st95hf");
MODULE_ALIAS("of:N*T*Cst,st95hfC*");
MODULE_ALIAS("spi:st95hf");
