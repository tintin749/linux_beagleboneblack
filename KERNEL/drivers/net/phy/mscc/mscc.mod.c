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
	{ 0x6cc6124d, "genphy_suspend" },
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc1987ef4, "genphy_read_status" },
	{ 0xfe90c4a6, "_find_first_zero_bit_le" },
	{ 0x60bffe6d, "div64_u64" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x31de3060, "phy_drivers_register" },
	{ 0x2fb6ee84, "phy_select_page" },
	{ 0xb4ee743e, "mdiobus_write" },
	{ 0x71e3e9c4, "__genphy_config_aneg" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb0dab44, "macsec_pn_wrapped" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x7587c873, "phy_mac_interrupt" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xdb1ae12a, "netif_rx_ni" },
	{ 0x915048a3, "phy_modify" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1c588fc4, "devm_phy_package_join" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x71c90087, "memcmp" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0xab359dec, "mdiobus_read" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x6a6f24d1, "phy_modify_paged" },
	{ 0x14d9f9ea, "skb_complete_tx_timestamp" },
	{ 0x1678a6bb, "ptp_clock_register" },
	{ 0x91452968, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x2b55f58d, "genphy_aneg_done" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x9975f654, "genphy_resume" },
	{ 0x924c2e43, "__mdiobus_write" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2218e1d, "phy_drivers_unregister" },
	{ 0xb8c66d3d, "genphy_soft_reset" },
	{ 0x2c4902e9, "phy_restore_page" },
	{ 0x33d9fb25, "phy_read_paged" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xe0adc7b0, "devm_gpiod_get_optional" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x2a4ea56, "ptp_clock_index" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x17f7b69a, "__mdiobus_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xff689ea5, "gpiod_set_value" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x3fc2da4f, "genphy_restart_aneg" },
};

MODULE_INFO(depends, "macsec");

MODULE_ALIAS("mdio:0000000000000111000001001100????");
MODULE_ALIAS("mdio:0000000000000111000001100111????");
MODULE_ALIAS("mdio:0000000000000111000001010110????");
MODULE_ALIAS("mdio:0000000000000111000001010111????");
MODULE_ALIAS("mdio:0000000000000111000001110110????");
MODULE_ALIAS("mdio:0000000000000111000001110111????");
MODULE_ALIAS("mdio:0000000000000111000001001110????");
MODULE_ALIAS("mdio:0000000000000111000001111110????");
MODULE_ALIAS("mdio:0000000000000111000001001101????");
MODULE_ALIAS("mdio:0000000000000111000001001010????");
MODULE_ALIAS("mdio:0000000000000111000001111101????");
MODULE_ALIAS("mdio:0000000000000111000001111011????");
MODULE_ALIAS("mdio:0000000000000111000001111100????");
