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
	{ 0xab4718fc, "kill_litter_super" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0x6a6d6acc, "default_llseek" },
	{ 0x86cfb2b5, "simple_statfs" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0x9feca520, "unregister_binfmt" },
	{ 0xbd1002c6, "__register_binfmt" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe21b3165, "iput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x359a0470, "d_instantiate" },
	{ 0x2f3c3cd0, "simple_pin_fs" },
	{ 0x10e914b, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xa1b86e22, "new_inode" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x9f2de26f, "lookup_one_len" },
	{ 0x4253aa7e, "down_write" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xc8339e24, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc1a78c, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0xf2b58bc0, "simple_release_fs" },
	{ 0x7ab9c548, "d_drop" },
	{ 0xac5da070, "drop_nlink" },
	{ 0x858721fe, "_raw_write_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0x221899b2, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xe0d3761c, "clear_inode" },
	{ 0x1e5895ee, "simple_fill_super" },
	{ 0x28b115c9, "get_tree_single" },
	{ 0x8f6d5f7, "open_exec" },
	{ 0xfcb02f56, "remove_arg_zero" },
	{ 0x37970b69, "dput" },
	{ 0x75b2c94a, "dentry_open" },
	{ 0x4aae4c0b, "bprm_change_interp" },
	{ 0x6c9b3dcc, "copy_string_kernel" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x11089ac7, "_ctype" },
};

MODULE_INFO(depends, "");

