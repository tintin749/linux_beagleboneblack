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
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6c1ce5ce, "strcspn" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xffee383e, "of_device_uevent_modalias" },
	{ 0x5f754e5a, "memset" },
	{ 0x8112492b, "device_register" },
	{ 0xc08c1ad2, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0x84be1006, "driver_unregister" },
	{ 0x328a05f1, "strncpy" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x8b6100a7, "of_match_device" },
	{ 0x49f26466, "kstrndup" },
	{ 0x8f58e89e, "dev_pm_domain_detach" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3ec8f735, "dev_pm_domain_attach" },
	{ 0xfaa5e025, "of_device_modalias" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xcc32e812, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x9c6febfc, "add_uevent_var" },
};

MODULE_INFO(depends, "");

