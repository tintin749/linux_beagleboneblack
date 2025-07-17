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
	{ 0xce7e7e9f, "iio_unregister_sw_trigger_type" },
	{ 0xb503d5ad, "iio_register_sw_trigger_type" },
	{ 0x56ab0610, "config_group_init_type_name" },
	{ 0x323647c7, "__iio_trigger_register" },
	{ 0x9a1ddbeb, "iio_trigger_alloc" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c5a8f02, "kthread_stop" },
	{ 0x3066972, "wake_up_process" },
	{ 0x53d95018, "kthread_create_on_node" },
	{ 0xca7d8764, "kthread_freezable_should_stop" },
	{ 0x101fa1c3, "iio_trigger_poll_chained" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4aad3ff, "iio_trigger_free" },
	{ 0x8354372d, "iio_trigger_unregister" },
};

MODULE_INFO(depends, "industrialio-sw-trigger");

