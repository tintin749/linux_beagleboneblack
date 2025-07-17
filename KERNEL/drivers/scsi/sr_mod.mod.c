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
	{ 0xd6011ff, "scsi_set_medium_removal" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xa4d109c0, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x26a86fdc, "cdrom_number_of_slots" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x1efd2268, "scsi_ioctl_block_when_processing_errors" },
	{ 0x560ef3b7, "unregister_cdrom" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x6e472ded, "blk_dump_rq_flags" },
	{ 0xfffa3100, "sg_next" },
	{ 0x62982eb8, "scsi_free_sgtables" },
	{ 0xbf6689c, "scmd_printk" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x41df1d53, "cdrom_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa80a32e4, "scsi_autopm_get_device" },
	{ 0x97c02f52, "scsi_alloc_sgtables" },
	{ 0xd6561dd9, "__alloc_disk_node" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x150c2633, "cdrom_release" },
	{ 0xd7d32d70, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0x1aed12cf, "__scsi_execute" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x84b183ae, "strncmp" },
	{ 0x71a9be68, "sdev_prefix_printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xcf4d1c0, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xff65370b, "bdev_check_media_change" },
	{ 0xec2f20d2, "cdrom_check_events" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xa10cdde7, "cdrom_get_last_written" },
	{ 0xe9251e73, "scsi_device_put" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfcf226a0, "scsi_ioctl" },
	{ 0xf4570e18, "put_disk" },
	{ 0xc0feaad1, "scsi_register_driver" },
	{ 0x14369daf, "scsi_block_when_processing_errors" },
	{ 0x6e23fc58, "scsi_test_unit_ready" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x716b7d17, "cdrom_ioctl" },
	{ 0x59e11c27, "blk_pm_runtime_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe5316fea, "register_cdrom" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xda133b69, "device_add_disk" },
	{ 0x81c89467, "scsi_device_get" },
	{ 0xa46e82e5, "scsi_autopm_put_device" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x9332a79, "blk_queue_logical_block_size" },
	{ 0xa19e9a65, "scsi_mode_sense" },
};

MODULE_INFO(depends, "cdrom");

