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
	{ 0x67f0e816, "bus_register" },
	{ 0x8221889f, "driver_register" },
	{ 0x1476b226, "rpmsg_send" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8112492b, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3e9026cf, "unregister_rpmsg_driver" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x87ae4244, "bus_find_device" },
	{ 0x2765a657, "__register_rpmsg_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0x85e8ecfd, "devm_kfree" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa346975c, "idr_remove" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xcd4e017d, "devm_kstrdup" },
	{ 0x1000e51, "schedule" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x9d669763, "memcpy" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x47925794, "idr_find" },
};

MODULE_INFO(depends, "rpmsg_core");

