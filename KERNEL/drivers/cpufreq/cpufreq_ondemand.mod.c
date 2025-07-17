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
	{ 0x63869afb, "cpufreq_dbs_governor_start" },
	{ 0x613f7f5d, "cpufreq_register_governor" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7b9793a2, "get_cpu_idle_time_us" },
	{ 0x8b494d69, "__cpufreq_driver_target" },
	{ 0x4df0a7aa, "cpufreq_dbs_governor_limits" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x233d3c0a, "cpufreq_table_index_unsorted" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3e213d1c, "cpufreq_unregister_governor" },
	{ 0x3d9f21fe, "__cpu_online_mask" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x448527c2, "cpufreq_cpu_get_raw" },
	{ 0xcf3a0db, "store_sampling_rate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa23d64a7, "cpufreq_dbs_governor_init" },
	{ 0x71ec9852, "cpufreq_dbs_governor_exit" },
	{ 0x67656ae, "cpufreq_dbs_governor_stop" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xbd208941, "gov_update_cpu_data" },
	{ 0xf6773bd4, "dbs_update" },
};

MODULE_INFO(depends, "");

