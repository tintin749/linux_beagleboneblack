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
	{ 0x1476b226, "rpmsg_send" },
	{ 0x2ceeeda7, "qrtr_endpoint_register" },
	{ 0xc93c1a08, "qrtr_endpoint_post" },
	{ 0xfbe076b7, "__pskb_pull_tail" },
	{ 0x3e9026cf, "unregister_rpmsg_driver" },
	{ 0x2765a657, "__register_rpmsg_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xd87fcba, "qrtr_endpoint_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4fad61, "consume_skb" },
	{ 0x6ff0c382, "devm_kmalloc" },
};

MODULE_INFO(depends, "rpmsg_core,qrtr");

