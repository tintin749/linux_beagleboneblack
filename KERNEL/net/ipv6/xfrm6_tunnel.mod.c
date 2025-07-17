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
	{ 0x6595a339, "kmem_cache_destroy" },
	{ 0xb8172048, "xfrm6_tunnel_deregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbec83ed1, "xfrm_unregister_type" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x5f754e5a, "memset" },
	{ 0xa6ebf29a, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa9ee6578, "kmem_cache_free" },
	{ 0xe6f8407d, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8f151e5d, "xfrm_state_flush" },
	{ 0xfd400dfc, "xfrm_register_type" },
	{ 0x7dabad7a, "kmem_cache_alloc" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x71cb7d9f, "register_pernet_subsys" },
	{ 0xc541b1f4, "kmem_cache_create" },
	{ 0xa24f715, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8ae05000, "xfrm6_tunnel_register" },
};

MODULE_INFO(depends, "tunnel6");

