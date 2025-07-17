cmd_drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.o := /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/temp/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/arm-linux-gnueabi-gcc -Wp,-MMD,drivers/base/firmware_loader/builtin/.am335x-evm-scale-data.bin.gen.o.d  -nostdinc -isystem /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/temp/dl/gcc-10.5.0-nolibc/arm-linux-gnueabi/bin/../lib/gcc/arm-linux-gnueabi/10.5.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float    -c -o drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.o drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.S

source_drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.o := drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.S

deps_drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \

drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.o: $(deps_drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.o)

$(deps_drivers/base/firmware_loader/builtin/am335x-evm-scale-data.bin.gen.o):
