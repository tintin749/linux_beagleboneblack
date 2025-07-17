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
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x96f7950c, "iio_triggered_buffer_cleanup" },
	{ 0x8354372d, "iio_trigger_unregister" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x8ce08746, "iio_trigger_notify_done" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0x199fa99a, "spi_sync_locked" },
	{ 0x5f754e5a, "memset" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0xe2ebe13d, "iio_trigger_poll" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd8d9e769, "spi_sync" },
	{ 0xf51321a, "iio_device_claim_direct_mode" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9135dba6, "wait_for_completion_interruptible_timeout" },
	{ 0xd5adecf7, "spi_bus_lock" },
	{ 0x607c184d, "get_device" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f08c0b9, "iio_device_release_direct_mode" },
	{ 0xe01d5ebd, "iio_push_to_buffers" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x999a3710, "iio_validate_scan_mask_onehot" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc37335b0, "complete" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x82c2f015, "iio_triggered_buffer_setup" },
	{ 0x3a66a4a7, "spi_bus_unlock" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

