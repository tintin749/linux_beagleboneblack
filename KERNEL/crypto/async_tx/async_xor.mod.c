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
	{ 0x43145f74, "page_address" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0xd57dab72, "dmaengine_unmap_put" },
	{ 0x5f754e5a, "memset" },
	{ 0x57ed1ddc, "async_tx_submit" },
	{ 0x5b6c00e6, "xor_blocks" },
	{ 0xd8572a84, "dmaengine_get_unmap_data" },
	{ 0x7505bdef, "memchr_inv" },
	{ 0x50ce40a9, "__async_tx_find_channel" },
	{ 0xf424ab35, "async_tx_quiesce" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x12c329e, "dma_map_page_attrs" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
};

MODULE_INFO(depends, "async_tx");

