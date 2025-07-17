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
	{ 0xf800366f, "virtio_transport_shutdown" },
	{ 0xee54b597, "virtio_transport_notify_buffer_size" },
	{ 0xe7dcd0a7, "virtio_transport_notify_send_post_enqueue" },
	{ 0xf13b0708, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x9af97ee7, "virtio_transport_notify_send_pre_block" },
	{ 0xd7ba802e, "virtio_transport_notify_send_init" },
	{ 0x1ea0abe9, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x3fdbbfe7, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x73010b11, "virtio_transport_notify_recv_pre_block" },
	{ 0xcd050399, "virtio_transport_notify_recv_init" },
	{ 0x3be682c8, "virtio_transport_notify_poll_out" },
	{ 0x9ca8e59, "virtio_transport_notify_poll_in" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0x78b553c3, "virtio_transport_stream_is_active" },
	{ 0xf4ebdb7b, "virtio_transport_stream_rcvhiwat" },
	{ 0xc55d079a, "virtio_transport_stream_has_space" },
	{ 0x3b31b647, "virtio_transport_stream_has_data" },
	{ 0xb2d6ad7c, "virtio_transport_stream_enqueue" },
	{ 0x616512b5, "virtio_transport_stream_dequeue" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0xd168cd8a, "virtio_transport_dgram_enqueue" },
	{ 0xeb9b423a, "virtio_transport_dgram_dequeue" },
	{ 0x5b4d97c4, "virtio_transport_dgram_bind" },
	{ 0x228b5e35, "virtio_transport_connect" },
	{ 0x4f1512b4, "virtio_transport_release" },
	{ 0x30022795, "virtio_transport_destruct" },
	{ 0x845dccc6, "virtio_transport_do_socket_init" },
	{ 0x92b57248, "flush_work" },
	{ 0xdb535762, "vsock_core_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7f87a8fe, "vsock_core_register" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6add779f, "virtio_transport_free_pkt" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x346743c2, "virtio_transport_recv_pkt" },
	{ 0x82727f82, "virtio_transport_deliver_tap_pkt" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");

