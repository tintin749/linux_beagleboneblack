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
	{ 0x753cac7, "eth_validate_addr" },
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0xbde00808, "remove_proc_entry" },
	{ 0x1fe67c67, "deregister_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0xb5924e1f, "register_atm_ioctl" },
	{ 0x88c36817, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6f8407d, "skb_push" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x6007f590, "eth_type_trans" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x4fad61, "consume_skb" },
	{ 0x71c90087, "memcmp" },
	{ 0x462c7f8a, "unregister_netdev" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9d669763, "memcpy" },
	{ 0x24dd59ef, "vcc_process_recv_queue" },
	{ 0x1b0adb07, "__module_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x39b689a3, "register_netdev" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x84b183ae, "strncmp" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x37a0cba, "kfree" },
	{ 0xe864a95a, "module_put" },
	{ 0x611ce62d, "_raw_write_unlock_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2c42a97b, "_raw_write_lock_irq" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xa5641881, "eth_mac_addr" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x536613a8, "netif_tx_wake_queue" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x8aa0402b, "_raw_read_unlock_irqrestore" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x1210fb32, "_raw_read_lock_irqsave" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "atm");

