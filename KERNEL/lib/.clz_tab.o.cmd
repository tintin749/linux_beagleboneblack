cmd_lib/clz_tab.o := /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/temp/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/arm-linux-gnueabi-gcc -Wp,-MMD,lib/.clz_tab.o.d  -nostdinc -isystem /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/temp/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/../lib/gcc/arm-linux-gnueabi/10.5.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -msoft-float -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=1024 -fstack-protector-strong -Wimplicit-fallthrough -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned    -DKBUILD_MODFILE='"lib/clz_tab"' -DKBUILD_BASENAME='"clz_tab"' -DKBUILD_MODNAME='"clz_tab"' -c -o lib/clz_tab.o lib/clz_tab.c

source_lib/clz_tab.o := lib/clz_tab.c

deps_lib/clz_tab.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arm64.h) \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
    $(wildcard include/config/kcov.h) \

lib/clz_tab.o: $(deps_lib/clz_tab.o)

$(deps_lib/clz_tab.o):
