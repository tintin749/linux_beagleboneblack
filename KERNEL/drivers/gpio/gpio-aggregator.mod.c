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
	{ 0x2878e15a, "idr_destroy" },
	{ 0x246790df, "idr_for_each" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x84b183ae, "strncmp" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3c09e3ec, "platform_device_register_full" },
	{ 0x5f754e5a, "memset" },
	{ 0x38aa1397, "gpiod_add_lookup_table" },
	{ 0x1b015d25, "bitmap_parselist" },
	{ 0xa346975c, "idr_remove" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0xc5850110, "printk" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc479c23a, "gpiod_set_config" },
	{ 0x7a98b8b0, "gpiod_get_direction" },
	{ 0x4bc68d47, "gpiod_direction_input" },
	{ 0xc39c7f73, "gpiod_direction_output" },
	{ 0xc116eb5d, "gpiod_get_value" },
	{ 0xffaf70e7, "gpiod_get_value_cansleep" },
	{ 0xbead4ea1, "gpiod_get_array_value" },
	{ 0xb740af37, "gpiod_get_array_value_cansleep" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0xe7d6072e, "gpiod_set_value_cansleep" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x471114d1, "gpiochip_get_data" },
	{ 0xbf83a561, "gpiod_set_array_value" },
	{ 0x85e3042c, "gpiod_set_array_value_cansleep" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x9e2baeb8, "desc_to_gpio" },
	{ 0x17e4892d, "devm_gpiochip_add_data_with_key" },
	{ 0x61c04805, "gpiod_cansleep" },
	{ 0x90c7d1f4, "gpiod_to_chip" },
	{ 0x1954f1aa, "devm_gpiod_get_index" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x1f92a656, "gpiod_count" },
	{ 0x349cba85, "strchr" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x421d4dcf, "krealloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xff81487d, "gpiod_remove_lookup_table" },
	{ 0x8287700d, "platform_device_unregister" },
};

MODULE_INFO(depends, "");

