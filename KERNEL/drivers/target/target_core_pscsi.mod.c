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
	{ 0x35927c78, "passthrough_attrib_attrs" },
	{ 0x692a30b2, "target_backend_unregister" },
	{ 0x8f0d477c, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x6f058967, "blkdev_get_by_path" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x81c89467, "scsi_device_get" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0x1aed12cf, "__scsi_execute" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xade94699, "blk_execute_rq_nowait" },
	{ 0xfffa3100, "sg_next" },
	{ 0x986fd94d, "bio_alloc_bioset" },
	{ 0x2f0a98a4, "blk_rq_append_bio" },
	{ 0x1f2be323, "bio_add_pc_page" },
	{ 0x7d863613, "blk_get_request" },
	{ 0x9d669763, "memcpy" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x949633ee, "passthrough_parse_cdb" },
	{ 0xb46b2673, "scsi_host_lookup" },
	{ 0xe9251e73, "scsi_device_put" },
	{ 0x450c36bc, "blkdev_put" },
	{ 0xd3949849, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6347906d, "bio_put" },
	{ 0xc5850110, "printk" },
	{ 0xf5482337, "transport_kunmap_data_sg" },
	{ 0x883a925a, "transport_kmap_data_sg" },
	{ 0x43145f74, "page_address" },
	{ 0x7e83a8cd, "target_lun_is_rdonly" },
	{ 0xd14235e0, "transport_copy_sense_to_cmd" },
	{ 0x71ebc2bd, "target_complete_cmd_with_length" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xb3156011, "blk_put_request" },
	{ 0x2ebab094, "target_complete_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "target_core_mod");

