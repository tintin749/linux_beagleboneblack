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
	{ 0x618727d6, "param_ops_bool" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x71c90087, "memcmp" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xf0a630c4, "rc_free_device" },
	{ 0x7a7efb83, "rc_register_device" },
	{ 0x5f754e5a, "memset" },
	{ 0x1f9811c2, "i2c_new_dummy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x6d058185, "rc_allocate_device" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xdf0d0056, "rc_keydown" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x91452968, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x9d669763, "memcpy" },
	{ 0xdd345e15, "rc_unregister_device" },
	{ 0xbe217956, "i2c_unregister_device" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");
