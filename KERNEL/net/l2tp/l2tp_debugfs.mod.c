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
	{ 0x1b206cd0, "seq_read" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xc5850110, "printk" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x56479a5d, "l2tp_tunnel_get_nth" },
	{ 0xe25a1c45, "l2tp_session_get_nth" },
	{ 0x301769fb, "seq_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x73e5201a, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xdce6b3b4, "seq_open" },
	{ 0xb9b9a7ea, "get_net_ns_by_pid" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x497c068b, "l2tp_tunnel_dec_refcount" },
	{ 0xc6764eec, "l2tp_session_dec_refcount" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0xfbea611e, "_raw_read_unlock_bh" },
	{ 0xb6f859f4, "_raw_read_lock_bh" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "74BE447FEE12F28770C3D6B");
