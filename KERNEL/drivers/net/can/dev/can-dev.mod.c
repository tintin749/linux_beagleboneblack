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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcb12b20b, "netdev_info" },
	{ 0x6acbbe17, "napi_schedule_prep" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x75a38389, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x7eb34365, "skb_queue_purge" },
	{ 0x8f2f06b0, "sock_efree" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xf687108, "nla_put" },
	{ 0x40193871, "netif_receive_skb" },
	{ 0xf823161d, "netif_napi_add" },
	{ 0xe95c9483, "rtnl_link_unregister" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xa7427670, "of_get_child_by_name" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0x8a8bccad, "__napi_schedule" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x53faaa41, "napi_complete_done" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xb298e641, "__netif_napi_del" },
	{ 0x138569c2, "netdev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbf6a1c37, "rtnl_link_register" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x4fad61, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x738c0b10, "skb_put" },
	{ 0xe772a05f, "of_node_put" },
};

MODULE_INFO(depends, "");

