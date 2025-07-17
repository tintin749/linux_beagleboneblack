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
	{ 0xe32d5ecf, "param_ops_int" },
	{ 0xdff14d72, "serio_unregister_driver" },
	{ 0xf49bf910, "__serio_register_driver" },
	{ 0xc1fb9852, "cec_s_phys_addr" },
	{ 0x68f67584, "cec_s_log_addrs" },
	{ 0xf0fd60e7, "cec_register_adapter" },
	{ 0xaf450b58, "cec_delete_adapter" },
	{ 0x82b34dd1, "serio_open" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x31116d75, "cec_allocate_adapter" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xc37335b0, "complete" },
	{ 0x9d669763, "memcpy" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x9d3ff6ee, "cec_received_msg_ts" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5f754e5a, "memset" },
	{ 0xeea0399, "strscpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x635ba4dc, "cec_transmit_attempt_done_ts" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x355c6ba6, "_dev_info" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xcb540d1a, "serio_close" },
	{ 0x15d0ee1, "cec_unregister_adapter" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr40id*ex*");
