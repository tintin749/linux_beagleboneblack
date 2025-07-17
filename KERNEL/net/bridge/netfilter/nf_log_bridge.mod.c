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
	{ 0x38a9e7ab, "nf_log_unregister" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x427f8a19, "nf_log_register" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0x39e61495, "nf_logger_request_module" },
	{ 0x604cbc5d, "nf_log_set" },
	{ 0x75eb8dcb, "nf_log_unset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xeccb40a6, "nf_log_l2packet" },
};

MODULE_INFO(depends, "nf_log_common");

