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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3726c6aa, "module_layout" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0x78321671, "gnss_put_device" },
	{ 0x22af65a3, "gnss_register_device" },
	{ 0x8cbc0ee, "serdev_device_close" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xbf75e2b5, "gnss_deregister_device" },
	{ 0x9f8a7647, "gnss_allocate_device" },
	{ 0x81fd7db5, "serdev_device_wait_until_sent" },
	{ 0xae7ee0af, "serdev_device_write" },
	{ 0x6be3caa1, "serdev_device_write_wakeup" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4e669af8, "serdev_device_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x5200fdbf, "serdev_device_set_flow_control" },
	{ 0x4021aa77, "gnss_insert_raw" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xcbad3000, "serdev_device_set_baudrate" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
};

MODULE_INFO(depends, "gnss");

