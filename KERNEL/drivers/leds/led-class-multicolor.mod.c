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
	{ 0x5b3f0818, "led_set_brightness" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1aca7559, "devres_alloc_node" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x6b198c77, "led_colors" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x69da4c7a, "devres_release" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe4c6d6b1, "devres_add" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "");

