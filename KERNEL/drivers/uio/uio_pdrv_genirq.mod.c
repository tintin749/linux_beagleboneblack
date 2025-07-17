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
	{ 0x5f711fcb, "param_ops_string" },
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xcfce4d76, "platform_get_irq_optional" },
	{ 0x91452968, "_dev_err" },
	{ 0x1ed6b638, "__devm_uio_register_device" },
	{ 0xcd4e017d, "devm_kstrdup" },
	{ 0xf7232345, "devm_add_action" },
	{ 0xe30895e7, "pm_runtime_enable" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0xe7aac48b, "devm_kasprintf" },
	{ 0x2e55b2ae, "of_property_read_string" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x76d014a7, "__pm_runtime_resume" },
	{ 0xd1c7f296, "__pm_runtime_idle" },
	{ 0x6c027e43, "__pm_runtime_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*Cuio");
MODULE_ALIAS("of:N*T*CuioC*");
MODULE_ALIAS("of:N*T*Cti,pruss-shmem");
MODULE_ALIAS("of:N*T*Cti,pruss-shmemC*");
MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");
