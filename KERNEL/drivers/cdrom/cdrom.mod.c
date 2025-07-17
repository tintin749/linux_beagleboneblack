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
	{ 0xc9ca3698, "register_sysctl_table" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x86eb0c08, "proc_dointvec" },
	{ 0xb3156011, "blk_put_request" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x70c79fbb, "scsi_cmd_blk_ioctl" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x3d5ba341, "blk_rq_unmap_user" },
	{ 0x45cbc972, "invalidate_bdev" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf6d9c30b, "blk_rq_map_user" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8bee75d7, "proc_dostring" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x2072b8b4, "unregister_sysctl_table" },
	{ 0x3ce94527, "blk_execute_rq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x314b20c8, "scnprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0x7d863613, "blk_get_request" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");

