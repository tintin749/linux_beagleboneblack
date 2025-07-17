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
	{ 0x8d78db94, "rproc_da_to_va" },
	{ 0x32f35683, "generic_file_llseek" },
	{ 0xc5b8ad2e, "debugfs_create_dir" },
	{ 0x6c4081c4, "devm_ioremap_resource" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x3b1da60d, "simple_attr_read" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x1d94580b, "mbox_request_channel" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0xdf484807, "mbox_client_txdone" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0x148828ed, "rproc_put" },
	{ 0xcc004468, "platform_get_resource" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0xfd77ed18, "request_firmware_nowait" },
	{ 0x91452968, "_dev_err" },
	{ 0x952664c5, "do_exit" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3066972, "wake_up_process" },
	{ 0x822592db, "rproc_shutdown" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x607c184d, "get_device" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x9d669763, "memcpy" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xd81c5ffc, "platform_get_irq" },
	{ 0x1f91b992, "mbox_free_channel" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x87dd9ef8, "rproc_boot" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x13e561f3, "rproc_get_by_phandle" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x5d8db723, "simple_attr_write" },
	{ 0xe647e752, "mbox_send_message" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3-ipc");
MODULE_ALIAS("of:N*T*Cti,am3352-wkup-m3-ipcC*");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3-ipc");
MODULE_ALIAS("of:N*T*Cti,am4372-wkup-m3-ipcC*");
