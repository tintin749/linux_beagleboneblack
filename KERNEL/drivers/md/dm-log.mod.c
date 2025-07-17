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
	{ 0xa24f23d8, "__request_module" },
	{ 0x2690e6c1, "_find_next_zero_bit_le" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x4be85a03, "memweight" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdfeb50ad, "dm_get_device" },
	{ 0xe14da0d6, "dm_io" },
	{ 0xf4e8499a, "dm_table_get_mode" },
	{ 0x999e8297, "vfree" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x28e50ea6, "dm_table_event" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe864a95a, "module_put" },
	{ 0x9f984513, "strrchr" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xc24d74b3, "dm_put_device" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "dm-mod");

