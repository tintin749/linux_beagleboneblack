workstatation : /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/ti-linux-kernel-dev



https://labs.dese.iisc.ac.in/embeddedlab/building-the-linux-kernel-cross-compiling-for-a-beaglebone-black-2/

first run (to setup baseline tree): ./build_kernel.sh then modify files under KERNEL directory then run (to rebuild with your changes): ./tools/rebuild.sh



Code change to be done : 
1. linux kernel path : /media/chandan/1ce61dd8-cc98-4b87-a167-d3e43f659fc4/home/developer/development/linux/bbb_setup/sdcard_linux/ti-linux-kernel-dev/KERNEL








Compile :


./tools/rebuild.sh




Deploy : 





Booting :





ti-linux-kernel-dev
5.10.168-ti-r71




scp -v ./bb-kernel/deploy/${kernel_version}.zImage debian@192.168.6.2:/boot/vmlinuz-${kernel_version}

/************************************************************************************/
step1: Do the code change in KERNEL folder
step2: ./tools/rebuild.sh
step3: mv KERNEL/arch/arm/boot/zImage KERNEL/arch/arm/boot/vmlinuz-5.10.168-ti-r71
step4 : scp KERNEL/arch/arm/boot/vmlinuz-5.10.168-ti-r71 debian@192.168.6.2:/boot




