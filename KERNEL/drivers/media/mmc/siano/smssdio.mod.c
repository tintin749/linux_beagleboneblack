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
	{ 0xf792592f, "sdio_register_driver" },
	{ 0xd7990a8, "smscore_start_device" },
	{ 0x83001e96, "sdio_claim_irq" },
	{ 0x3b7d0c8f, "sdio_set_block_size" },
	{ 0x2d753c2f, "sdio_enable_func" },
	{ 0x8ea79ed, "smscore_set_board_id" },
	{ 0xe5b7eaae, "smscore_register_device" },
	{ 0x844539ae, "sms_get_board" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x459253a9, "sdio_memcpy_toio" },
	{ 0x37d91069, "smsendian_handle_tx_message" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4bed458, "smscore_getbuffer" },
	{ 0xb5ba5d88, "smscore_onresponse" },
	{ 0x45284ae9, "smsendian_handle_rx_message" },
	{ 0xe2393dc3, "sdio_memcpy_fromio" },
	{ 0x76dfdc17, "sdio_readb" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0x2b32fd4d, "sdio_release_host" },
	{ 0xa1189e01, "sdio_disable_func" },
	{ 0x18d2bd3f, "sdio_release_irq" },
	{ 0x1a52013b, "sdio_claim_host" },
	{ 0x630f33bd, "smscore_unregister_device" },
	{ 0x974a4146, "smscore_putbuffer" },
};

MODULE_INFO(depends, "smsmdtv");

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");
