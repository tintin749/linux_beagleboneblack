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
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x8e062c9e, "v4l2_ctrl_cluster" },
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xb472f54c, "v4l2_subdev_call_wrappers" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xcbcecaf, "i2c_transfer" },
	{ 0x9142282b, "v4l2_ctrl_handler_free" },
	{ 0x807c7c75, "v4l2_ctrl_new_std" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xb31d942b, "param_ops_charp" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8b4feaca, "media_entity_pads_init" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x268645c, "v4l2_device_unregister_subdev" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x87dc2d6f, "v4l2_ctrl_handler_setup" },
	{ 0xc090c243, "v4l2_ctrl_handler_log_status" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1d37318b, "i2c_transfer_buffer_flags" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x7b325817, "v4l2_ctrl_handler_init_class" },
	{ 0xa03c11b3, "request_firmware" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0x3e6bdc94, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cx25840");
