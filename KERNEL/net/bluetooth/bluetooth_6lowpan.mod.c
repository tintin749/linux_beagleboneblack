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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x9a634694, "l2cap_chan_set_defaults" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x83d2a225, "single_open" },
	{ 0x29762e0c, "single_release" },
	{ 0x98096990, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x75a38389, "skb_clone" },
	{ 0xa60266c3, "skb_copy" },
	{ 0x48427c2e, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x49f53eec, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd4defa53, "neigh_destroy" },
	{ 0x60c82909, "l2cap_add_psm" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x32d70e66, "debugfs_create_file" },
	{ 0x1b206cd0, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xd5912e94, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0x28fdf4a3, "hci_get_route" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0x3203279b, "l2cap_chan_put" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xf184b718, "iov_iter_kvec" },
	{ 0x158625bc, "debugfs_remove" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x190e7ae8, "dev_close" },
	{ 0x60199663, "nd_tbl" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x953cc52f, "simple_attr_release" },
	{ 0x4db8b9a9, "debugfs_create_file_unsafe" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfa01ce83, "debugfs_attr_read" },
	{ 0xb3431117, "dev_open" },
	{ 0x202bc90f, "lowpan_header_decompress" },
	{ 0xe864a95a, "module_put" },
	{ 0xfe9d1571, "skb_copy_expand" },
	{ 0x1cba704d, "lowpan_unregister_netdev" },
	{ 0xf84722fe, "bt_debugfs" },
	{ 0xc7fe9c97, "__alloc_skb" },
	{ 0x2bf7ac59, "put_device" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x46de3143, "l2cap_chan_connect" },
	{ 0x27ca2f43, "netdev_notify_peers" },
	{ 0x1fe8f7f, "lowpan_register_netdev" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xabaaf386, "l2cap_chan_create" },
	{ 0x2fb38a07, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x4fad61, "consume_skb" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xd8e978c4, "debugfs_attr_write" },
	{ 0x6b3190ab, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x50992cef, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan");


MODULE_INFO(srcversion, "4BFA31212EFD87814C822F5");
