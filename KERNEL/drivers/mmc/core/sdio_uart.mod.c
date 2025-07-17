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
	{ 0x4e927545, "sdio_unregister_driver" },
	{ 0x10aacb52, "put_tty_driver" },
	{ 0x968034d3, "tty_unregister_driver" },
	{ 0xf792592f, "sdio_register_driver" },
	{ 0x994692ad, "tty_register_driver" },
	{ 0xeb898af7, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xd1b941a5, "__tty_alloc_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x38835699, "tty_flip_buffer_push" },
	{ 0x3ff1053e, "tty_wakeup" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf1a50d83, "__tty_insert_flip_char" },
	{ 0x25b8aad7, "tty_kref_put" },
	{ 0x85c6ab2a, "tty_port_tty_get" },
	{ 0xade0739b, "tty_standard_install" },
	{ 0xc6cbbc89, "capable" },
	{ 0xab6d656, "seq_putc" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x567f4894, "tty_port_register_device" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x2384dd17, "tty_port_init" },
	{ 0xc5850110, "printk" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x5db6fb6e, "tty_port_open" },
	{ 0xf624bab7, "tty_port_close" },
	{ 0xbd90fe92, "tty_port_hangup" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9313749f, "sdio_writeb" },
	{ 0x76dfdc17, "sdio_readb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x100ccaff, "tty_unregister_device" },
	{ 0x3b33bff9, "tty_port_put" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0xbbd9242b, "tty_port_tty_hangup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");
