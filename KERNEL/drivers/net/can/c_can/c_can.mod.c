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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0xa4866ed5, "register_candev" },
	{ 0x70351a34, "napi_disable" },
	{ 0x6acbbe17, "napi_schedule_prep" },
	{ 0x6f03cdaf, "alloc_can_err_skb" },
	{ 0xcadd0589, "pinctrl_select_state" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0x60c57d49, "pinctrl_lookup_state" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0xfc6bdaa0, "can_bus_off" },
	{ 0xe5821c44, "pinctrl_get" },
	{ 0x4dddc55c, "close_candev" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x14d4a9c5, "_change_bit" },
	{ 0x40193871, "netif_receive_skb" },
	{ 0xf5382be0, "alloc_candev_mqs" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x21f8d6a5, "free_candev" },
	{ 0xe0b3c3e7, "pinctrl_pm_select_sleep_state" },
	{ 0xfea2a3f8, "pinctrl_put" },
	{ 0x835c1f64, "can_change_mtu" },
	{ 0xfa31dfa1, "unregister_candev" },
	{ 0x85491e62, "alloc_can_skb" },
	{ 0x8a8bccad, "__napi_schedule" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0x8caec5e5, "pinctrl_pm_select_default_state" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x69f255b6, "open_candev" },
	{ 0xb298e641, "__netif_napi_del" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xdae132dd, "can_get_echo_skb" },
	{ 0xcc151deb, "can_put_echo_skb" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");

