# !/bin/bash


echo $PWD

#mv $PWD/KERNEL/arch/arm/boot/zImage $PWD/KERNEL/arch/arm/boot/vmlinuz-5.10.168-ti-r71

scp $PWD/KERNEL/arch/arm/boot/vmlinuz-5.10.168-ti-r71 debian@192.168.6.2:/boot
