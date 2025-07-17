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
	{ 0x15f5c1f6, "param_ops_uint" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xbf451cca, "__class_create" },
	{ 0xf856a51f, "__register_chrdev" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xb9ba0011, "spi_setup" },
	{ 0x28118cb6, "__get_user_1" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x607c184d, "get_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8781d48, "device_create" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0x62aed307, "spi_slave_abort" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x98171fcf, "device_destroy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xc271c3be, "mutex_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Cge,achc");
MODULE_ALIAS("of:N*T*Cge,achcC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");
MODULE_ALIAS("of:N*T*Ccisco,spi-petra");
MODULE_ALIAS("of:N*T*Ccisco,spi-petraC*");
MODULE_ALIAS("of:N*T*Cmicron,spi-authenta");
MODULE_ALIAS("of:N*T*Cmicron,spi-authentaC*");
