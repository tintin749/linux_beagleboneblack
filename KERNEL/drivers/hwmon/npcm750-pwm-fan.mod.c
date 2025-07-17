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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe772a05f, "of_node_put" },
	{ 0x91452968, "_dev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xc5850110, "printk" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc53361d9, "devm_hwmon_device_register_with_info" },
	{ 0xaed49293, "devm_thermal_of_cooling_device_register" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xf02a7658, "of_property_read_variable_u8_array" },
	{ 0x2e814a7d, "of_property_count_elems_of_size" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x3bfb583c, "of_get_next_child" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd7e0e5cc, "devm_clk_get" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0xdece4587, "platform_get_resource_byname" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe707d823, "__aeabi_uidiv" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnuvoton,npcm750-pwm-fan");
MODULE_ALIAS("of:N*T*Cnuvoton,npcm750-pwm-fanC*");
