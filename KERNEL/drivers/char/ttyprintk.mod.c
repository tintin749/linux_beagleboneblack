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
	{ 0x968034d3, "tty_unregister_driver" },
	{ 0xe0ccf170, "tty_port_destroy" },
	{ 0x10aacb52, "put_tty_driver" },
	{ 0x994692ad, "tty_register_driver" },
	{ 0x9aee6c6b, "tty_port_link_device" },
	{ 0xeb898af7, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x2384dd17, "tty_port_init" },
	{ 0xd1b941a5, "__tty_alloc_driver" },
	{ 0xc5850110, "printk" },
	{ 0xf624bab7, "tty_port_close" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x5db6fb6e, "tty_port_open" },
	{ 0xbd90fe92, "tty_port_hangup" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

