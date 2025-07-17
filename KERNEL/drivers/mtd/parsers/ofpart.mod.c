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
	{ 0x16c6ecbc, "deregister_mtd_parser" },
	{ 0x97b0b573, "__register_mtd_parser" },
	{ 0x37a0cba, "kfree" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x801f1dfa, "of_n_size_cells" },
	{ 0x2696282e, "of_n_addr_cells" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x3bfb583c, "of_get_next_child" },
	{ 0x2c7be11f, "of_device_is_compatible" },
	{ 0xa7427670, "of_get_child_by_name" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x97255bdf, "strlen" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9b126258, "of_get_property" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfixed-partitions");
MODULE_ALIAS("of:N*T*Cfixed-partitionsC*");
