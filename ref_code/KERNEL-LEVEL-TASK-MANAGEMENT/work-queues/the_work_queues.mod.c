#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8e6402a9, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x595451f1, "kmalloc_caches" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x360b6b7a, "pv_ops" },
	{ 0x69af1880, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x49b3b968, "module_put" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe78dfe6d, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4083b059, "param_ops_ulong" },
	{ 0xffee12e9, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "70983B11FD94475329B0FE5");
