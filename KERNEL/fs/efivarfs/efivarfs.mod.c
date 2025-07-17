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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xac5da070, "drop_nlink" },
	{ 0x7410aba2, "strreplace" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0xdbd8b0dc, "efivar_entry_delete" },
	{ 0x97255bdf, "strlen" },
	{ 0x28b115c9, "get_tree_single" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x48c28a83, "simple_lookup" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0xdcd58b6e, "generic_delete_inode" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0x37970b69, "dput" },
	{ 0xf81c5432, "inc_nlink" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x1696865d, "d_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xbdaad4aa, "d_delete" },
	{ 0xc7811e25, "inode_owner_or_capable" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xab4718fc, "kill_litter_super" },
	{ 0x11089ac7, "_ctype" },
	{ 0xab7e7eff, "efivar_entry_remove" },
	{ 0x71c90087, "memcmp" },
	{ 0xd2bc25aa, "efivar_entry_size" },
	{ 0xad5737fc, "efivar_init" },
	{ 0xbdf0c7c8, "vfs_ioc_setflags_prepare" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x448b4776, "simple_open" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x2ba188eb, "efivar_entry_set_get_size" },
	{ 0x7c7b6690, "mnt_drop_write_file" },
	{ 0xaa147d12, "simple_dir_operations" },
	{ 0xf1c05c44, "d_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfeb2e442, "efivar_entry_get" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x23950433, "efivar_variable_is_removable" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xf35a86f4, "mnt_want_write_file" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8a7b7580, "register_filesystem" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xe21b3165, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xd82862dd, "efivar_entry_add" },
	{ 0x10e914b, "current_time" },
	{ 0x170f7c43, "always_delete_dentry" },
	{ 0xc824bee6, "d_make_root" },
	{ 0x86cfb2b5, "simple_statfs" },
	{ 0x659398b0, "inode_set_flags" },
	{ 0x3ee168b3, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xa1b86e22, "new_inode" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x803f4952, "__efivar_entry_iter" },
	{ 0xe0d3761c, "clear_inode" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x359a0470, "d_instantiate" },
	{ 0x496d87c1, "efivars_kobject" },
	{ 0x4336fcca, "ucs2_as_utf8" },
};

MODULE_INFO(depends, "");

