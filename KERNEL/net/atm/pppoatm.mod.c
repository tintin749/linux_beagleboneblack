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
	{ 0x1fe67c67, "deregister_atm_ioctl" },
	{ 0xb5924e1f, "register_atm_ioctl" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x4fad61, "consume_skb" },
	{ 0xd6bb62de, "skb_realloc_headroom" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x24dd59ef, "vcc_process_recv_queue" },
	{ 0x1b0adb07, "__module_get" },
	{ 0xef5e95b3, "ppp_register_channel" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x95dbe078, "__get_user_2" },
	{ 0x342443a2, "ppp_unit_number" },
	{ 0xc43064a, "ppp_channel_index" },
	{ 0x1672d150, "ppp_output_wakeup" },
	{ 0x80fd8317, "skb_pull" },
	{ 0x71c90087, "memcmp" },
	{ 0x81696c18, "ppp_input_error" },
	{ 0xd4fe72a, "kfree_skb" },
	{ 0xe864a95a, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xefde5979, "ppp_unregister_channel" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x8d49882b, "__dynamic_pr_debug" },
	{ 0x916c85bf, "ppp_input" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xbc10dd97, "__put_user_4" },
};

MODULE_INFO(depends, "atm,ppp_generic");

