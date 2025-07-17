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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xf4211f81, "ks8851_resume" },
	{ 0x8e175a67, "ks8851_suspend" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xd0ed61a3, "__spi_register_driver" },
	{ 0x4fad61, "consume_skb" },
	{ 0x766b9a6d, "skb_dequeue" },
	{ 0x895dd482, "ks8851_probe_common" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1c59880e, "devm_alloc_etherdev_mqs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x780f39d8, "netdev_err" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x3bce164a, "skb_queue_tail" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0x92b57248, "flush_work" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x23f38498, "ks8851_remove_common" },
};

MODULE_INFO(depends, "ks8851_common");

MODULE_ALIAS("of:N*T*Cmicrel,ks8851");
MODULE_ALIAS("of:N*T*Cmicrel,ks8851C*");
