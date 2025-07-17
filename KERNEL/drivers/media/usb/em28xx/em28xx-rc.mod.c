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
	{ 0x2d3385d3, "system_wq" },
	{ 0x12702392, "em28xx_read_reg" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xb5be5e84, "em28xx_write_regs" },
	{ 0xfe25a832, "dev_printk" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x83939bea, "em28xx_register_extension" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0xf144f336, "input_event" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x38758e29, "em28xx_find_led" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0x1b6862a0, "em28xx_toggle_reg_bits" },
	{ 0xdf0d0056, "rc_keydown" },
	{ 0x57295083, "em28xx_unregister_extension" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0x299af634, "em28xx_write_reg_bits" },
	{ 0x91452968, "_dev_err" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x47c19580, "input_register_device" },
	{ 0x20496c04, "input_free_device" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x5d822b49, "i2c_probe_func_quick_read" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x712a1276, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x54ef1933, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx,rc-core");


MODULE_INFO(srcversion, "FA2160F9D4DCCF47832CC19");
