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
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xcad8ec82, "tcp_register_congestion_control" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xca23fb2f, "tcp_unregister_congestion_control" },
	{ 0x33ee3cba, "tcp_reno_ssthresh" },
	{ 0x7558215c, "tcp_slow_start" },
	{ 0x733b64ca, "tcp_reno_undo_cwnd" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4acf7055, "tcp_reno_cong_avoid" },
};

MODULE_INFO(depends, "");

