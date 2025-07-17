	.arch armv7-a
	.fpu softvfp
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 2	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 2	@ Tag_ABI_PCS_wchar_t
	.file	"emif-asm-offsets.c"
@ GNU C89 (GCC) version 10.5.0 (arm-linux-gnueabi)
@	compiled by GNU C version 13.1.0, GMP version 6.2.1, MPFR version 4.1.0, MPC version 1.2.1, isl version isl-0.24-GMP

@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc -I ./arch/arm/include
@ -I ./arch/arm/include/generated -I ./include -I ./arch/arm/include/uapi
@ -I ./arch/arm/include/generated/uapi -I ./include/uapi
@ -I ./include/generated/uapi
@ -iprefix /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/linux_beagleboneblack/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/../lib/gcc/arm-linux-gnueabi/10.5.0/
@ -D __KERNEL__ -D __LINUX_ARM_ARCH__=7 -U arm
@ -D KBUILD_MODFILE="drivers/memory/emif-asm-offsets"
@ -D KBUILD_BASENAME="emif_asm_offsets"
@ -D KBUILD_MODNAME="emif_asm_offsets"
@ -isystem /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/linux_beagleboneblack/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/../lib/gcc/arm-linux-gnueabi/10.5.0/include
@ -include ./include/linux/kconfig.h
@ -include ./include/linux/compiler_types.h
@ -MMD drivers/memory/.emif-asm-offsets.s.d
@ drivers/memory/emif-asm-offsets.c -mlittle-endian -mfloat-abi=soft
@ -mabi=aapcs-linux -mfpu=vfp -marm -mtls-dialect=gnu -mlibarch=armv7-a
@ -march=armv7-a -auxbase-strip drivers/memory/emif-asm-offsets.s -O2 -Wall
@ -Wundef -Werror=strict-prototypes -Wno-trigraphs
@ -Werror=implicit-function-declaration -Werror=implicit-int
@ -Werror=return-type -Wno-format-security -Wno-frame-address
@ -Wformat-truncation=0 -Wformat-overflow=0 -Wno-address-of-packed-member
@ -Wframe-larger-than=1024 -Wimplicit-fallthrough=3
@ -Wno-unused-but-set-variable -Wunused-const-variable=0
@ -Wdeclaration-after-statement -Wvla -Wno-pointer-sign
@ -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds
@ -Wstringop-overflow=0 -Wno-restrict -Wno-maybe-uninitialized
@ -Werror=date-time -Werror=incompatible-pointer-types
@ -Werror=designated-init -Wno-packed-not-aligned -std=gnu90
@ -fmacro-prefix-map=./= -fno-strict-aliasing -fno-common -fshort-wchar
@ -fno-PIE -fno-dwarf2-cfi-asm -fno-ipa-sra -funwind-tables
@ -fno-delete-null-pointer-checks -fno-allow-store-data-races
@ -fstack-protector-strong -fomit-frame-pointer -fno-strict-overflow
@ -fstack-check=no -fconserve-stack -fverbose-asm
@ options enabled:  -faggressive-loop-optimizations -falign-functions
@ -falign-jumps -falign-labels -falign-loops -fallocation-dce
@ -fauto-inc-dec -fbranch-count-reg -fcaller-saves -fcode-hoisting
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-symbols -feliminate-unused-debug-types
@ -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
@ -ffunction-cse -fgcse -fgcse-lm -fgnu-unique -fguess-branch-probability
@ -fhoist-adjacent-loads -fident -fif-conversion -fif-conversion2
@ -findirect-inlining -finline -finline-atomics -finline-functions
@ -finline-functions-called-once -finline-small-functions -fipa-bit-cp
@ -fipa-cp -fipa-icf -fipa-icf-functions -fipa-icf-variables -fipa-profile
@ -fipa-pure-const -fipa-ra -fipa-reference -fipa-reference-addressable
@ -fipa-stack-alignment -fipa-vrp -fira-hoist-pressure
@ -fira-share-save-slots -fira-share-spill-slots
@ -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
@ -fleading-underscore -flifetime-dse -flra-remat -fmath-errno
@ -fmerge-constants -fmerge-debug-strings -fmove-loop-invariants
@ -fomit-frame-pointer -foptimize-sibling-calls -foptimize-strlen
@ -fpartial-inlining -fpeephole -fpeephole2 -fplt -fprefetch-loop-arrays
@ -freg-struct-return -freorder-blocks -freorder-functions
@ -frerun-cse-after-loop -fsched-critical-path-heuristic
@ -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
@ -fsched-last-insn-heuristic -fsched-pressure -fsched-rank-heuristic
@ -fsched-spec -fsched-spec-insn-heuristic -fsched-stalled-insns-dep
@ -fschedule-insns -fschedule-insns2 -fsection-anchors
@ -fsemantic-interposition -fshow-column -fshrink-wrap
@ -fshrink-wrap-separate -fsigned-zeros -fsplit-ivs-in-unroller
@ -fsplit-wide-types -fssa-backprop -fssa-phiopt -fstack-protector-strong
@ -fstdarg-opt -fstore-merging -fstrict-volatile-bitfields -fsync-libcalls
@ -fthread-jumps -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp
@ -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-coalesce-vars
@ -ftree-copy-prop -ftree-cselim -ftree-dce -ftree-dominator-opts
@ -ftree-dse -ftree-forwprop -ftree-fre -ftree-loop-distribute-patterns
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
@ -ftree-vrp -funit-at-a-time -funwind-tables -fverbose-asm -fwrapv
@ -fwrapv-pointer -fzero-initialized-in-bss -marm -mbe32 -mglibc
@ -mlittle-endian -mpic-data-is-text-relative -msched-prolog
@ -munaligned-access -mvectorize-with-neon-quad

	.text
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.type	main, %function
main:
	.fnstart
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	@ link register save eliminated.
@ ./include/linux/ti-emif-sram.h:66: 	DEFINE(EMIF_SDCFG_VAL_OFFSET,
	.syntax divided
@ 66 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_SDCFG_VAL_OFFSET #0 offsetof(struct emif_regs_amx3, emif_sdcfg_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:68: 	DEFINE(EMIF_TIMING1_VAL_OFFSET,
@ 68 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_TIMING1_VAL_OFFSET #4 offsetof(struct emif_regs_amx3, emif_timing1_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:70: 	DEFINE(EMIF_TIMING2_VAL_OFFSET,
@ 70 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_TIMING2_VAL_OFFSET #8 offsetof(struct emif_regs_amx3, emif_timing2_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:72: 	DEFINE(EMIF_TIMING3_VAL_OFFSET,
@ 72 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_TIMING3_VAL_OFFSET #12 offsetof(struct emif_regs_amx3, emif_timing3_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:74: 	DEFINE(EMIF_REF_CTRL_VAL_OFFSET,
@ 74 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_REF_CTRL_VAL_OFFSET #16 offsetof(struct emif_regs_amx3, emif_ref_ctrl_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:76: 	DEFINE(EMIF_ZQCFG_VAL_OFFSET,
@ 76 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_ZQCFG_VAL_OFFSET #20 offsetof(struct emif_regs_amx3, emif_zqcfg_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:78: 	DEFINE(EMIF_PMCR_VAL_OFFSET,
@ 78 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PMCR_VAL_OFFSET #24 offsetof(struct emif_regs_amx3, emif_pmcr_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:80: 	DEFINE(EMIF_PMCR_SHDW_VAL_OFFSET,
@ 80 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PMCR_SHDW_VAL_OFFSET #28 offsetof(struct emif_regs_amx3, emif_pmcr_shdw_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:82: 	DEFINE(EMIF_RD_WR_LEVEL_RAMP_CTRL_OFFSET,
@ 82 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_RD_WR_LEVEL_RAMP_CTRL_OFFSET #32 offsetof(struct emif_regs_amx3, emif_rd_wr_level_ramp_ctrl)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:84: 	DEFINE(EMIF_RD_WR_EXEC_THRESH_OFFSET,
@ 84 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_RD_WR_EXEC_THRESH_OFFSET #36 offsetof(struct emif_regs_amx3, emif_rd_wr_exec_thresh)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:86: 	DEFINE(EMIF_COS_CONFIG_OFFSET,
@ 86 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_COS_CONFIG_OFFSET #40 offsetof(struct emif_regs_amx3, emif_cos_config)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:88: 	DEFINE(EMIF_PRIORITY_TO_COS_MAPPING_OFFSET,
@ 88 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PRIORITY_TO_COS_MAPPING_OFFSET #44 offsetof(struct emif_regs_amx3, emif_priority_to_cos_mapping)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:90: 	DEFINE(EMIF_CONNECT_ID_SERV_1_MAP_OFFSET,
@ 90 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_CONNECT_ID_SERV_1_MAP_OFFSET #48 offsetof(struct emif_regs_amx3, emif_connect_id_serv_1_map)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:92: 	DEFINE(EMIF_CONNECT_ID_SERV_2_MAP_OFFSET,
@ 92 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_CONNECT_ID_SERV_2_MAP_OFFSET #52 offsetof(struct emif_regs_amx3, emif_connect_id_serv_2_map)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:94: 	DEFINE(EMIF_OCP_CONFIG_VAL_OFFSET,
@ 94 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_OCP_CONFIG_VAL_OFFSET #56 offsetof(struct emif_regs_amx3, emif_ocp_config_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:96: 	DEFINE(EMIF_LPDDR2_NVM_TIM_OFFSET,
@ 96 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_LPDDR2_NVM_TIM_OFFSET #60 offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:98: 	DEFINE(EMIF_LPDDR2_NVM_TIM_SHDW_OFFSET,
@ 98 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_LPDDR2_NVM_TIM_SHDW_OFFSET #64 offsetof(struct emif_regs_amx3, emif_lpddr2_nvm_tim_shdw)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:100: 	DEFINE(EMIF_DLL_CALIB_CTRL_VAL_OFFSET,
@ 100 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_DLL_CALIB_CTRL_VAL_OFFSET #68 offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:102: 	DEFINE(EMIF_DLL_CALIB_CTRL_VAL_SHDW_OFFSET,
@ 102 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_DLL_CALIB_CTRL_VAL_SHDW_OFFSET #72 offsetof(struct emif_regs_amx3, emif_dll_calib_ctrl_val_shdw)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:104: 	DEFINE(EMIF_DDR_PHY_CTLR_1_OFFSET,
@ 104 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_DDR_PHY_CTLR_1_OFFSET #76 offsetof(struct emif_regs_amx3, emif_ddr_phy_ctlr_1)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:106: 	DEFINE(EMIF_EXT_PHY_CTRL_VALS_OFFSET,
@ 106 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_EXT_PHY_CTRL_VALS_OFFSET #80 offsetof(struct emif_regs_amx3, emif_ext_phy_ctrl_vals)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:108: 	DEFINE(EMIF_REGS_AMX3_SIZE, sizeof(struct emif_regs_amx3));
@ 108 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_REGS_AMX3_SIZE #560 sizeof(struct emif_regs_amx3)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:110: 	BLANK();
@ 110 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->"
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:112: 	DEFINE(EMIF_PM_BASE_ADDR_VIRT_OFFSET,
@ 112 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_BASE_ADDR_VIRT_OFFSET #0 offsetof(struct ti_emif_pm_data, ti_emif_base_addr_virt)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:114: 	DEFINE(EMIF_PM_BASE_ADDR_PHYS_OFFSET,
@ 114 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_BASE_ADDR_PHYS_OFFSET #4 offsetof(struct ti_emif_pm_data, ti_emif_base_addr_phys)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:116: 	DEFINE(EMIF_PM_CONFIG_OFFSET,
@ 116 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_CONFIG_OFFSET #8 offsetof(struct ti_emif_pm_data, ti_emif_sram_config)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:118: 	DEFINE(EMIF_PM_REGS_VIRT_OFFSET,
@ 118 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_REGS_VIRT_OFFSET #12 offsetof(struct ti_emif_pm_data, regs_virt)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:120: 	DEFINE(EMIF_PM_REGS_PHYS_OFFSET,
@ 120 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_REGS_PHYS_OFFSET #16 offsetof(struct ti_emif_pm_data, regs_phys)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:122: 	DEFINE(EMIF_PM_DATA_SIZE, sizeof(struct ti_emif_pm_data));
@ 122 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_DATA_SIZE #24 sizeof(struct ti_emif_pm_data)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:124: 	BLANK();
@ 124 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->"
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:126: 	DEFINE(EMIF_PM_SAVE_CONTEXT_OFFSET,
@ 126 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_SAVE_CONTEXT_OFFSET #0 offsetof(struct ti_emif_pm_functions, save_context)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:128: 	DEFINE(EMIF_PM_RESTORE_CONTEXT_OFFSET,
@ 128 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_RESTORE_CONTEXT_OFFSET #4 offsetof(struct ti_emif_pm_functions, restore_context)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:130: 	DEFINE(EMIF_PM_RUN_HW_LEVELING,
@ 130 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_RUN_HW_LEVELING #8 offsetof(struct ti_emif_pm_functions, run_hw_leveling)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:132: 	DEFINE(EMIF_PM_ENTER_SR_OFFSET,
@ 132 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_ENTER_SR_OFFSET #12 offsetof(struct ti_emif_pm_functions, enter_sr)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:134: 	DEFINE(EMIF_PM_EXIT_SR_OFFSET,
@ 134 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_EXIT_SR_OFFSET #16 offsetof(struct ti_emif_pm_functions, exit_sr)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:136: 	DEFINE(EMIF_PM_ABORT_SR_OFFSET,
@ 136 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_ABORT_SR_OFFSET #20 offsetof(struct ti_emif_pm_functions, abort_sr)"	@
@ 0 "" 2
@ ./include/linux/ti-emif-sram.h:138: 	DEFINE(EMIF_PM_FUNCTIONS_SIZE, sizeof(struct ti_emif_pm_functions));
@ 138 "./include/linux/ti-emif-sram.h" 1
	
.ascii "->EMIF_PM_FUNCTIONS_SIZE #24 sizeof(struct ti_emif_pm_functions)"	@
@ 0 "" 2
@ drivers/memory/emif-asm-offsets.c:14: }
	.arm
	.syntax unified
	mov	r0, #0	@,
	bx	lr	@
	.fnend
	.size	main, .-main
	.ident	"GCC: (GNU) 10.5.0"
	.section	.note.GNU-stack,"",%progbits
