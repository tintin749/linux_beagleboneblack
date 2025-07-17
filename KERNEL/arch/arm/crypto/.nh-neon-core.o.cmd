cmd_arch/arm/crypto/nh-neon-core.o := /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/temp/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/arm-linux-gnueabi-gcc -Wp,-MMD,arch/arm/crypto/.nh-neon-core.o.d  -nostdinc -isystem /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/temp/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/../lib/gcc/arm-linux-gnueabi/10.5.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float  -DMODULE  -c -o arch/arm/crypto/nh-neon-core.o arch/arm/crypto/nh-neon-core.S

source_arch/arm/crypto/nh-neon-core.o := arch/arm/crypto/nh-neon-core.S

deps_arch/arm/crypto/nh-neon-core.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
    $(wildcard include/config/arch/use/sym/annotations.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm/include/asm/linkage.h \

arch/arm/crypto/nh-neon-core.o: $(deps_arch/arm/crypto/nh-neon-core.o)

$(deps_arch/arm/crypto/nh-neon-core.o):
