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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x67f0e816, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x8221889f, "driver_register" },
	{ 0x42dfed5c, "seq_printf" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd3385e4f, "snd_device_new" },
	{ 0xb96022f3, "device_del" },
	{ 0x84be1006, "driver_unregister" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0xbbef2540, "bus_unregister" },
	{ 0xc594e41f, "bus_for_each_dev" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xad17126b, "snd_seq_root" },
	{ 0x17c55104, "snd_info_free_entry" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x41e201fb, "snd_info_create_module_entry" },
	{ 0x1dd707be, "snd_info_register" },
};

MODULE_INFO(depends, "snd");

