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
	{ 0x34ebabd0, "dm_unregister_target" },
	{ 0xb0efa5a7, "dm_register_target" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x77f6f183, "kmalloc_order_trace" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0xe07f91e3, "dm_set_target_max_io_len" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xc5850110, "printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2fc27962, "bio_associate_blkg" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x37a0cba, "kfree" },
	{ 0x999e8297, "vfree" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

MODULE_INFO(depends, "dm-mod");

