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
	{ 0xf8252269, "platform_driver_unregister" },
	{ 0x8900a5ba, "__platform_driver_register" },
	{ 0x91452968, "_dev_err" },
	{ 0xbede776e, "dev_err_probe" },
	{ 0x9ffcc077, "__devm_iio_device_register" },
	{ 0x606edacc, "iio_read_max_channel_raw" },
	{ 0x854e45f3, "iio_get_channel_type" },
	{ 0x71c04a9d, "irq_get_irq_data" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x56c3d0fa, "platform_get_irq_byname" },
	{ 0x741e4592, "devm_iio_channel_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xff814b79, "devm_iio_device_alloc" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x546f50a6, "iio_read_channel_scale" },
	{ 0xc37335b0, "complete" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xcf4e9342, "iio_write_channel_raw" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x668b595, "_kstrtoul" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xae577d60, "_raw_spin_lock" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caxentia,tse850-envelope-detector");
MODULE_ALIAS("of:N*T*Caxentia,tse850-envelope-detectorC*");
