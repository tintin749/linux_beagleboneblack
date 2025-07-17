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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xe62ca738, "gpio_to_desc" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb2d2ddf3, "ath_printk" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x12c223d9, "ath_hw_get_listen_time" },
	{ 0xf98605d5, "ath_regd_get_band_ctl" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb8c830ab, "ath_hw_cycle_counters_update" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x97512a46, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6eb0fe6d, "gpiod_set_raw_value" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x858845ea, "gpiod_get_raw_value" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "ath");

