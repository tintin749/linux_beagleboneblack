cmd_arch/arm/boot/compressed/piggy_data := { cat arch/arm/boot/compressed/../Image | lz4c -l -c1 stdin stdout; printf \\220\\007\\146\\001; } > arch/arm/boot/compressed/piggy_data
