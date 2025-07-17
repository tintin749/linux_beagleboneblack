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
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x91452968, "_dev_err" },
	{ 0x51ee8a5d, "mmc_add_host" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x86c00727, "mmc_alloc_host" },
	{ 0x1bdccd5, "usb_control_msg" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3066972, "wake_up_process" },
	{ 0xcb60429e, "mmc_detect_change" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xab689b87, "usb_unlink_urb" },
	{ 0x6eaf9fa3, "mmc_request_done" },
	{ 0x7fa37630, "mmc_remove_host" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xfda41262, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0A12p5D10d*dc*dsc*dp*ic*isc*ip*in*");
