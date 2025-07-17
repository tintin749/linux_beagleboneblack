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
	{ 0xbaed6206, "cpufreq_freq_attr_scaling_available_freqs" },
	{ 0x984ebf2, "cpufreq_generic_suspend" },
	{ 0xba2b7f64, "cpufreq_generic_get" },
	{ 0xc289e46d, "cpufreq_generic_frequency_table_verify" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x67e8f21c, "dev_pm_opp_of_register_em" },
	{ 0x8cd8b82c, "dev_pm_opp_get_max_transition_latency" },
	{ 0xdb22a275, "cpufreq_freq_attr_scaling_boost_freqs" },
	{ 0xf30a5502, "cpufreq_enable_boost_support" },
	{ 0x404b5d37, "policy_has_boost_freq" },
	{ 0x8a30328b, "dev_pm_opp_get_suspend_opp_freq" },
	{ 0x7b5599bb, "dev_pm_opp_init_cpufreq_table" },
	{ 0x6667a62a, "dev_pm_opp_get_opp_count" },
	{ 0x4b86d74b, "dev_pm_opp_of_cpumask_add_table" },
	{ 0x5827c056, "clk_get" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x91452968, "_dev_err" },
	{ 0x1185a918, "dev_pm_opp_set_sharing_cpus" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3c4b2d35, "cpufreq_register_driver" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6ef0455b, "dev_pm_opp_get_sharing_cpus" },
	{ 0xf796597d, "dev_pm_opp_of_get_sharing_cpus" },
	{ 0x12092f07, "dev_pm_opp_set_regulators" },
	{ 0xe772a05f, "of_node_put" },
	{ 0xdd34d266, "of_find_property" },
	{ 0x6c417e80, "of_node_get" },
	{ 0xd7247922, "dev_pm_opp_get_opp_table" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xe890479d, "get_cpu_device" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb2eb807, "cpufreq_unregister_driver" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe36e5521, "dev_pm_opp_put_opp_table" },
	{ 0x5eb73c70, "dev_pm_opp_put_regulators" },
	{ 0x667cc299, "dev_pm_opp_set_rate" },
	{ 0x5ac9fb00, "dev_pm_opp_of_cpumask_remove_table" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb148259a, "dev_pm_opp_free_cpufreq_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

