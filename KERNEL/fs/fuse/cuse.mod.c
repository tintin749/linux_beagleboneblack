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
	{ 0xdf6f4cf5, "fuse_file_poll" },
	{ 0x9b2c83e2, "noop_llseek" },
	{ 0xfbaecf3c, "misc_deregister" },
	{ 0x5abf8d2b, "class_destroy" },
	{ 0xe6d42467, "misc_register" },
	{ 0xbf451cca, "__class_create" },
	{ 0x9d669763, "memcpy" },
	{ 0x48e2c8ac, "fuse_dev_operations" },
	{ 0xd2dca95d, "fuse_dev_free" },
	{ 0x34ff8d4, "fuse_simple_background" },
	{ 0x738767b, "__alloc_pages_nodemask" },
	{ 0xc328d39f, "fuse_dev_alloc_install" },
	{ 0x9965771e, "fuse_conn_init" },
	{ 0x2c576ae, "fuse_dev_fiq_ops" },
	{ 0xc5850110, "printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xb74ddb51, "kobject_uevent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x83c50091, "cdev_add" },
	{ 0xa5ad86c9, "cdev_alloc" },
	{ 0xbc7b0a6d, "device_add" },
	{ 0x2bf7ac59, "put_device" },
	{ 0x2e641d99, "dev_set_name" },
	{ 0x27a1f99f, "device_initialize" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x97255bdf, "strlen" },
	{ 0x43145f74, "page_address" },
	{ 0xaa0f758b, "__free_pages" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x93c3a49b, "fuse_direct_io" },
	{ 0x5f754e5a, "memset" },
	{ 0xec286224, "fuse_do_ioctl" },
	{ 0x8ceb1509, "fuse_do_open" },
	{ 0x9446a82d, "fuse_conn_get" },
	{ 0xd0603dfd, "fuse_sync_release" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b6626ee, "fuse_dev_release" },
	{ 0xf8bc4057, "fuse_conn_put" },
	{ 0x77abe509, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xcc32e812, "device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe02cc4f0, "fuse_abort_conn" },
};

MODULE_INFO(depends, "");

