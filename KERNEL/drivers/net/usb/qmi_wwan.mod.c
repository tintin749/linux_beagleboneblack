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
	{ 0x60b74021, "usbnet_get_stats64" },
	{ 0x50367493, "usbnet_tx_timeout" },
	{ 0x753cac7, "eth_validate_addr" },
	{ 0x95e5ebfd, "usbnet_start_xmit" },
	{ 0x6a78d28d, "usbnet_stop" },
	{ 0xecaad037, "usbnet_open" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0xb2c317e1, "free_netdev" },
	{ 0x71749ce5, "netif_stacked_transfer_operstate" },
	{ 0x407053e8, "netdev_upper_dev_link" },
	{ 0xa84b5654, "register_netdevice" },
	{ 0x15e8e1d9, "cpumask_next" },
	{ 0xbb7a8d8e, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0xb51a82ae, "alloc_netdev_mqs" },
	{ 0x60bc5b55, "netif_rx" },
	{ 0x9d669763, "memcpy" },
	{ 0x738c0b10, "skb_put" },
	{ 0x475d012c, "__netdev_alloc_skb" },
	{ 0x13c5bfee, "usbnet_disconnect" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xe06df80, "unregister_netdevice_queue" },
	{ 0xf4bbdb5, "netdev_upper_dev_unlink" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x50abbcdd, "usb_driver_release_interface" },
	{ 0x91452968, "_dev_err" },
	{ 0x2fb46788, "usbnet_get_ethernet_addr" },
	{ 0x3e82f3e9, "get_random_bytes" },
	{ 0xcc21d173, "usbnet_write_cmd" },
	{ 0x20fd5c12, "usb_cdc_wdm_register" },
	{ 0x30cc7367, "usbnet_get_endpoints" },
	{ 0x8c3019f, "usb_driver_claim_interface" },
	{ 0x4336ae64, "usb_ifnum_to_if" },
	{ 0x42a0deac, "cdc_parse_cdc_header" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x89651c63, "usbnet_probe" },
	{ 0xa141fc22, "usbnet_suspend" },
	{ 0x6f450dc6, "usbnet_resume" },
	{ 0x1cce99e, "eth_commit_mac_addr_change" },
	{ 0xaa8d89f4, "eth_prepare_mac_addr_change" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x780f39d8, "netdev_err" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd84fb0f1, "ether_setup" },
	{ 0x69ead645, "__dynamic_netdev_dbg" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x724d9c7c, "usbnet_change_mtu" },
	{ 0xc99025b0, "call_netdevice_notifiers" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xac7ad776, "netif_carrier_on" },
	{ 0x54d005f6, "netif_carrier_off" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x16cc526e, "dev_fetch_sw_netstats" },
	{ 0x554ac97b, "netdev_stats_to_stats64" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x974a427a, "netdev_upper_get_next_dev_rcu" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "cdc-wdm");

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip09in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip39in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip69in*");
MODULE_ALIAS("usb:v22B8p*d*dc*dsc*dp*icFFiscFBipFFin*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip07in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip11in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip37in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc01ip67in*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscF0ipFFin*");
MODULE_ALIAS("usb:v106Cp*d*dc*dsc*dp*icFFiscF1ipFFin*");
MODULE_ALIAS("usb:v1410pB001d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9010d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1410p9011d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8195d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp8196d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v413Cp819Bd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v16D5p650Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p421Dd*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v03F0p581Dd*dc*dsc*dp*icFFisc01ip07in*");
MODULE_ALIAS("usb:v2C7Cp0125d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0306d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0512d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0620d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0800d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v2C7Cp0801d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0408pEA42d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p6001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p7000d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p7001d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7002d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p7101d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p7102d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p8000d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p8001d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9003d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9005d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p900Ad*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Bd*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p900Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p900Dd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p900Fd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9010d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9010d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9011d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9011d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9021d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p9022d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9025d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9026d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p902Ed*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9031d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9032d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9033d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9034d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9035d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9036d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9037d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9038d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p903Bd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p903Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p903Dd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p903Ed*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9043d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9046d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9047d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9048d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p904Cd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9050d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9052d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9053d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9053d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9054d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9054d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9055d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9056d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9062d*dc*dsc*dp*ic*isc*ip*in09*");
MODULE_ALIAS("usb:v05C6p9064d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9065d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9065d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9066d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9066d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9067d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9068d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9069d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9070d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9070d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9075d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9076d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9077d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9078d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9079d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v05C6p9080d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v05C6p9083d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9084d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p90B2d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p920Dd*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v05C6p9625d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0846p68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v0846p68D3d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v12D1p140Cd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v1435p0918d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1435p0918d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435p0918d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1435p3185d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD111d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD181d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1435pD181d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD181d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1435pD182d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1435pD182d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1435pD191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1508p1001d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1690p7588d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p6003d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6007d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6008d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p6280d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7001d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7003d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p7004d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v16D8p7006d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v16D8p700Ad*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v16D8p7211d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7212d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7213d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p7251d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v16D8p7252d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v16D8p7253d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0002d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0012d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0017d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0019d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0021d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0025d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0031d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0042d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0049d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0052d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0055d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0058d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0063d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0104d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0113d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0118d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0121d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0123d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0124d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0125d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v19D2p0126d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0130d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0133d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0141d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0157d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p0158d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0167d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0168d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0176d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0178d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0199d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0200d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v19D2p0257d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0265d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0284d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0326d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p0396d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p0412d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1008d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1010d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1012d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1018d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p1021d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1245d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1247d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1252d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1254d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1255d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p1255d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1256d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v19D2p1270d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v19D2p1275d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p1401d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1402d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1424d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1425d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1426d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1428d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v19D2p1432d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2p2002d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2001p7E16d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v2001p7E19d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2001p7E35d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2001p7E3Dd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2020p2031d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2020p2033d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2020p2060d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0F3Dp68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v114Fp68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68A2d*dc*dsc*dp*ic*isc*ip*in13*");
MODULE_ALIAS("usb:v1199p68C0d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p68C0d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p901Cd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p901Fd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9041d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9041d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9051d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9053d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9054d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9055d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9056d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9057d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9061d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9063d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9063d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9071d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9071d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9079d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p9079d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p907Bd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1199p907Bd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p9091d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1BBBp011Ed*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1BBBp0203d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v2357p0201d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2357p9000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1BC7p1031d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1BC7p103Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1BC7p1040d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1050d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1060d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1070d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1100d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1BC7p1101d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1BC7p1200d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1BC7p1201d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1230d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1260d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1261d*dc*dsc*dp*ic*isc*ip*in02*");
MODULE_ALIAS("usb:v1BC7p1900d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v1C9Ep9801d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1C9Ep9803d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1C9Ep9B01d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v0B3CpC000d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC001d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC002d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0B3CpC004d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC005d*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC00Ad*dc*dsc*dp*ic*isc*ip*in06*");
MODULE_ALIAS("usb:v0B3CpC00Bd*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0060d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp006Fd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v1E2Dp0053d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0063d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1E2Dp0082d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp0082d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v1E2Dp0083d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp00B0d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1E2Dp00B7d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp81A2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A3d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A4d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A8d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81A9d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B1d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B3d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B6d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81B6d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v413Cp81C2d*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81CCd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v413Cp81D7d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp81D7d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v413Cp81E0d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp81E4d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp81E6d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p4E1Dd*dc*dsc*dp*ic*isc*ip*in08*");
MODULE_ALIAS("usb:v03F0p9D1Dd*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v22DEp9061d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1E0Ep9001d*dc*dsc*dp*ic*isc*ip*in05*");
MODULE_ALIAS("usb:v2C7Cp0121d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0191d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0195d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2C7Cp0296d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v2CB7p0104d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v0489pE0B4d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0489pE0B5d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v2692p9025d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v1546p1342d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9212d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v03F0p1F1Dd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v04DAp250Dd*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v413Cp8172d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA002d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA003d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA004d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA005d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA006d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v1410pA007d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v0B05p1776d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v19D2pFFF3d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9001d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9002d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9202d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9203d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9222d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v05C6p9009d*dc*dsc*dp*ic*isc*ip*in03*");
MODULE_ALIAS("usb:v413Cp8186d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v413Cp8194d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p920Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9225d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9245d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p251Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9215d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9215d*dc*dsc*dp*ic*isc*ip*in04*");
MODULE_ALIAS("usb:v05C6p9265d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9235d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9275d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0AF0p8120d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p68A5d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p68A9d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9001d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9003d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9004d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9005d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9006d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9007d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9008d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9009d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p900Ad*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9011d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v16D8p8002d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v05C6p9205d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9013d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v03F0p371Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9015d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p9019d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1199p901Bd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v12D1p14F1d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v1410pA021d*dc*dsc*dp*ic*isc*ip*in00*");
