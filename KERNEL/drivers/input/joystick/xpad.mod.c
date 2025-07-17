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
	{ 0x618727d6, "param_ops_bool" },
	{ 0x564b0c40, "usb_deregister" },
	{ 0xf5929c3b, "usb_register_driver" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xf47de486, "usb_kill_anchored_urbs" },
	{ 0x84fd67e0, "_dev_warn" },
	{ 0x92b57248, "flush_work" },
	{ 0xf59c8b31, "input_unregister_device" },
	{ 0x3c72724e, "usb_wait_anchor_empty_timeout" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc72eeb8, "usb_free_coherent" },
	{ 0x769eabc0, "usb_free_urb" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0x7f612961, "usb_alloc_urb" },
	{ 0x41ad47c7, "usb_alloc_coherent" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x56f36c33, "input_ff_destroy" },
	{ 0x5b3f0818, "led_set_brightness" },
	{ 0x545e880e, "led_classdev_register_ext" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xfe2e64c4, "kmem_cache_alloc_trace" },
	{ 0x8335c0f7, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xa24491bf, "ida_free" },
	{ 0x95ff4329, "led_classdev_unregister" },
	{ 0x47c19580, "input_register_device" },
	{ 0x20496c04, "input_free_device" },
	{ 0xe9d7469e, "input_ff_create_memless" },
	{ 0xc16dc84d, "input_set_capability" },
	{ 0x54ef1933, "input_allocate_device" },
	{ 0xf144f336, "input_event" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xd35628d1, "usb_unanchor_urb" },
	{ 0x91452968, "_dev_err" },
	{ 0x3c8aec3c, "usb_submit_urb" },
	{ 0xaa005199, "usb_anchor_urb" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x81b256c5, "__dynamic_dev_dbg" },
	{ 0x59ef8cd7, "input_set_abs_params" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x855a4eec, "usb_kill_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic58isc42ip00in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0079p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v03EBp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v03EBp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v056Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v06A3p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p4540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v07FFp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0C12p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0C12p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1038p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v11C9p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1209p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v20D6p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2563p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2563p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v260Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v260Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v2DC8p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2E24p*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v2F24p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v2F24p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v31E3p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v31E3p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v3285p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v3285p*d*dc*dsc*dp*icFFisc5Dip81in*");
