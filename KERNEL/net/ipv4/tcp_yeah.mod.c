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
	{ 0xa458751e, "tcp_vegas_get_info" },
	{ 0x3d83952b, "tcp_vegas_pkts_acked" },
	{ 0x733b64ca, "tcp_reno_undo_cwnd" },
	{ 0x90e2fc88, "tcp_vegas_cwnd_event" },
	{ 0xd8fe6701, "tcp_vegas_state" },
	{ 0xca23fb2f, "tcp_unregister_congestion_control" },
	{ 0xcad8ec82, "tcp_register_congestion_control" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xa723c29d, "tcp_cong_avoid_ai" },
	{ 0x7558215c, "tcp_slow_start" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x78776d38, "tcp_vegas_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "tcp_vegas");

