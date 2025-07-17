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
	{ 0xf0c0b1c5, "no_llseek" },
	{ 0x47527f25, "input_unregister_handler" },
	{ 0x68a40ff4, "input_register_handler" },
	{ 0xf362dc7f, "arm_clear_user" },
	{ 0xbb72d4fe, "__put_user_1" },
	{ 0x61d52351, "input_grab_device" },
	{ 0x1dd5f132, "input_ff_erase" },
	{ 0xb9acd3d9, "__put_user_2" },
	{ 0x9af89767, "input_ff_upload" },
	{ 0x38a9c2c7, "input_ff_effect_from_user" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0x5f754e5a, "memset" },
	{ 0x29bceadc, "input_get_keycode" },
	{ 0x75c7c6cc, "input_set_keycode" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x97255bdf, "strlen" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x9d669763, "memcpy" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x6c5b1cd2, "input_release_device" },
	{ 0xc5850110, "printk" },
	{ 0x11e54c6, "cdev_device_add" },
	{ 0x2f31c9f4, "cdev_init" },
	{ 0x82ef64bf, "input_register_handle" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0x78bfb1f3, "input_class" },
	{ 0x607c184d, "get_device" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0xa89b3c4c, "input_open_device" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a46b1c3, "stream_open" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0x7b765972, "input_inject_event" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x31d30f26, "input_get_timestamp" },
	{ 0x271874a0, "fasync_helper" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x1d3b481d, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0xaf61fbab, "cdev_device_del" },
	{ 0x8a69d855, "input_close_device" },
	{ 0xc7d7d2e2, "input_flush_device" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xb0dc51f5, "kill_fasync" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");
