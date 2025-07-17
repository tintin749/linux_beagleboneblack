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
	{ 0x63727adc, "param_ops_ulong" },
	{ 0x5f711fcb, "param_ops_string" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x1e27eb8e, "unregister_mtd_user" },
	{ 0xbaa5bf4b, "register_mtd_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x999e8297, "vfree" },
	{ 0xb928f48c, "mtd_read" },
	{ 0x10c2e75a, "kmsg_dump_register" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x96bce2f2, "kmsg_dump_get_buffer" },
	{ 0xb6861ff4, "mtd_write" },
	{ 0x5f754e5a, "memset" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x52d714fe, "mtd_panic_write" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x92b57248, "flush_work" },
	{ 0xdea9919b, "kmsg_dump_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x63ae1e08, "mtd_block_markbad" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xc5850110, "printk" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3aa250c9, "mtd_erase" },
	{ 0xd774cd88, "mtd_block_isbad" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

MODULE_INFO(depends, "");

