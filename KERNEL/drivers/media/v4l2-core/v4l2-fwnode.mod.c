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
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x771bea2c, "v4l2_async_register_subdev" },
	{ 0x9e57eb16, "fwnode_graph_get_remote_port_parent" },
	{ 0x7beb5c84, "fwnode_handle_put" },
	{ 0xab56bb50, "v4l2_async_subdev_notifier_register" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x8a53cdaf, "v4l2_async_notifier_cleanup" },
	{ 0xe41c1f53, "v4l2_async_notifier_init" },
	{ 0x76c2868b, "fwnode_device_is_available" },
	{ 0x6a14e303, "v4l2_async_notifier_add_subdev" },
	{ 0xf06aeee7, "fwnode_property_present" },
	{ 0x8008f32a, "fwnode_property_read_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xf6e9c8cc, "v4l2_async_notifier_add_fwnode_subdev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe917f555, "fwnode_property_read_u64_array" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd5e9da8f, "fwnode_get_name" },
	{ 0x365e7911, "kstrdup_const" },
	{ 0xed22a207, "fwnode_property_read_u32_array" },
	{ 0x11258542, "fwnode_graph_parse_endpoint" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xeb28076d, "fwnode_property_get_reference_args" },
	{ 0xb41d94ce, "fwnode_graph_get_port_parent" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e50c057, "fwnode_graph_get_next_endpoint" },
	{ 0x5dddf7f2, "dev_fwnode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xae47dee0, "fwnode_graph_get_remote_endpoint" },
	{ 0x964b8c64, "v4l2_async_notifier_unregister" },
};

MODULE_INFO(depends, "");

