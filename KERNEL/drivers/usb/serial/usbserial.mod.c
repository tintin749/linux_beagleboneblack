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
	{ 0x85c6ab2a, "tty_port_tty_get" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x67f0e816, "bus_register" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8221889f, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xc1d0431e, "seq_puts" },
	{ 0x5db6fb6e, "tty_port_open" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0xbd90fe92, "tty_port_hangup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x855a4eec, "usb_kill_urb" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x994692ad, "tty_register_driver" },
	{ 0xc5582ce8, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x10aacb52, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xeb898af7, "tty_set_operations" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf1a50d83, "__tty_insert_flip_char" },
	{ 0xf624bab7, "tty_port_close" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0xb96022f3, "device_del" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9ebff4d0, "tty_ldisc_deref" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x567f4894, "tty_port_register_device" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xdaeb1edc, "usb_unpoison_urb" },
	{ 0xcc4f8ff0, "usb_poison_urb" },
	{ 0xab6d656, "seq_putc" },
	{ 0x2384dd17, "tty_port_init" },
	{ 0x61004fdf, "tty_insert_flip_string_fixed_flag" },
	{ 0xe0ccf170, "tty_port_destroy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x78739415, "tty_vhangup" },
	{ 0x90285fb9, "tty_ldisc_ref" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x91452968, "_dev_err" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7d0d253a, "usb_store_new_id" },
	{ 0xff7bf253, "usb_match_id" },
	{ 0xa346975c, "idr_remove" },
	{ 0x146cdd8f, "tty_port_tty_wakeup" },
	{ 0xe864a95a, "module_put" },
	{ 0x100ccaff, "tty_unregister_device" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xc3f04059, "usb_get_dev" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c751d0e, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x406e376b, "usb_get_intf" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x968034d3, "tty_unregister_driver" },
	{ 0x82d7381, "tty_hangup" },
	{ 0x845b2069, "usb_show_dynids" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xade0739b, "tty_standard_install" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xd1b941a5, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x22ed94c5, "usb_match_one_id" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x25b8aad7, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0xd8e9ecb3, "driver_attach" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5a4cd130, "param_ops_ushort" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x47925794, "idr_find" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x50992cef, "try_module_get" },
	{ 0x3a105dd1, "usb_autopm_put_interface" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0xb2d4eb27, "usb_put_intf" },
};

MODULE_INFO(depends, "");

