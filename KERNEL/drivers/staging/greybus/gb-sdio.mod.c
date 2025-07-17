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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x23196124, "sg_pcopy_to_buffer" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xcb60429e, "mmc_detect_change" },
	{ 0x36db63a9, "gb_gbphy_register_driver" },
	{ 0x43f084d6, "__pm_runtime_suspend" },
	{ 0xfda41262, "mmc_free_host" },
	{ 0x4702a647, "sg_pcopy_from_buffer" },
	{ 0x346d4b65, "gb_connection_disable_rx" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x2a6b6dd4, "gb_gbphy_deregister_driver" },
	{ 0x870ad977, "gb_connection_enable_tx" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x21384305, "gb_operation_sync_timeout" },
	{ 0x2c633bdd, "gb_connection_destroy" },
	{ 0x91452968, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x2356840b, "gb_operation_request_send_sync_timeout" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x51ee8a5d, "mmc_add_host" },
	{ 0x86c00727, "mmc_alloc_host" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xe1a07097, "gb_connection_enable" },
	{ 0x7fa37630, "mmc_remove_host" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x665d66d8, "gb_connection_create" },
	{ 0xb5afca43, "gb_connection_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4f1bb75b, "gb_operation_get_payload_size_max" },
	{ 0xa3c67852, "gb_operation_put" },
	{ 0x6eaf9fa3, "mmc_request_done" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xaca9a45b, "gb_operation_create_flags" },
};

MODULE_INFO(depends, "gb-gbphy,greybus");

