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
	{ 0x3e39ecc6, "sys_imageblit" },
	{ 0x32bf10fb, "sys_copyarea" },
	{ 0xb9430045, "sys_fillrect" },
	{ 0xbb2bf8cf, "fb_sys_write" },
	{ 0xa19dae68, "fb_sys_read" },
	{ 0xe024bc26, "i2c_del_driver" },
	{ 0xf38ed13a, "i2c_register_driver" },
	{ 0x47c19580, "input_register_device" },
	{ 0x9a59681b, "devm_request_threaded_irq" },
	{ 0x56dee3f0, "matrix_keypad_build_keymap" },
	{ 0xe0ea7551, "matrix_keypad_parse_properties" },
	{ 0x9b126258, "of_get_property" },
	{ 0xc9b63333, "devm_input_allocate_device" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0xf0a99826, "register_framebuffer" },
	{ 0x5f754e5a, "memset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x661e4207, "fb_bl_default_curve" },
	{ 0x7eb99300, "framebuffer_alloc" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xb41e1fe0, "of_property_read_variable_u32_array" },
	{ 0x49ae492, "devm_backlight_device_register" },
	{ 0x6a03dbce, "i2c_smbus_write_block_data" },
	{ 0x6ff0c382, "devm_kmalloc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x94eabf46, "i2c_smbus_write_i2c_block_data" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x91452968, "_dev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9d669763, "memcpy" },
	{ 0xd3f57a2, "_find_next_bit_le" },
	{ 0xf144f336, "input_event" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0xe1e76a13, "i2c_smbus_read_i2c_block_data" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb0762552, "i2c_smbus_write_byte" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee3ea93a, "vm_map_pages_zero" },
	{ 0xf18c41ee, "mem_map" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x46ded0d2, "framebuffer_release" },
	{ 0x361df619, "unregister_framebuffer" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("of:N*T*Choltek,ht16k33");
MODULE_ALIAS("of:N*T*Choltek,ht16k33C*");
MODULE_ALIAS("i2c:ht16k33");
