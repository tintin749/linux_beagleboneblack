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
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xfe25a832, "dev_printk" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x618727d6, "param_ops_bool" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x347c5f0e, "freezing_slow_path" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x91452968, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x268645c, "v4l2_device_unregister_subdev" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0xc090c243, "v4l2_ctrl_handler_log_status" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x3066972, "wake_up_process" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:msp3400");
