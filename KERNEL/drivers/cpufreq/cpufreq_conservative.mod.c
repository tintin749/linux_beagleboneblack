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
	{ 0xcf3a0db, "store_sampling_rate" },
	{ 0x4df0a7aa, "cpufreq_dbs_governor_limits" },
	{ 0x67656ae, "cpufreq_dbs_governor_stop" },
	{ 0x63869afb, "cpufreq_dbs_governor_start" },
	{ 0x71ec9852, "cpufreq_dbs_governor_exit" },
	{ 0xa23d64a7, "cpufreq_dbs_governor_init" },
	{ 0x3e213d1c, "cpufreq_unregister_governor" },
	{ 0x613f7f5d, "cpufreq_register_governor" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xbd208941, "gov_update_cpu_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8b494d69, "__cpufreq_driver_target" },
	{ 0xf6773bd4, "dbs_update" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

