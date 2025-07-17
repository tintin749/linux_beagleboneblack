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
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0x7beb5c84, "fwnode_handle_put" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6d910b29, "gpiochip_add_data_with_key" },
	{ 0x6c417e80, "of_node_get" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xd5e9da8f, "fwnode_get_name" },
	{ 0xed22a207, "fwnode_property_read_u32_array" },
	{ 0xe36f2e9, "fwnode_property_match_string" },
	{ 0x8008f32a, "fwnode_property_read_string" },
	{ 0xf45998ae, "device_get_next_child_node" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x91452968, "_dev_err" },
	{ 0x3a144459, "device_get_child_node_count" },
	{ 0xa3cd40e3, "i2c_smbus_write_byte_data" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x1b88f8aa, "gpiochip_remove" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tca6507");
MODULE_ALIAS("of:N*T*Cti,tca6507C*");
MODULE_ALIAS("i2c:tca6507");
