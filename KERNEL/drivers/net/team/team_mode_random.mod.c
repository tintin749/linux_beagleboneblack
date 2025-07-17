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
	{ 0xa166b1f4, "team_modeop_port_change_dev_addr" },
	{ 0xf20dd050, "team_modeop_port_enter" },
	{ 0x83097f15, "team_mode_unregister" },
	{ 0x71533588, "team_mode_register" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xbca3414a, "netpoll_send_skb" },
	{ 0x57099240, "__dev_kfree_skb_any" },
	{ 0x1a474683, "dev_queue_xmit" },
	{ 0xfda9581f, "prandom_u32" },
};

MODULE_INFO(depends, "team");

