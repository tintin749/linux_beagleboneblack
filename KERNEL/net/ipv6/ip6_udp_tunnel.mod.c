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
	{ 0x81fed507, "release_sock" },
	{ 0x16dc7961, "udp6_set_csum" },
	{ 0x7e631a69, "sock_bindtoindex" },
	{ 0x761d04d1, "sock_release" },
	{ 0x1a715715, "sock_create_kern" },
	{ 0x2d1c7697, "kernel_connect" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x2564ce8, "lock_sock_nested" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x928b7bd8, "kernel_sock_shutdown" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1176e07f, "__per_cpu_offset" },
	{ 0x5736af75, "kernel_bind" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x38de8673, "ip6_local_out" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "");

