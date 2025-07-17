cmd_arch/arm/boot/dts/omap5-igep0050.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.omap5-igep0050.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.omap5-igep0050.dtb.dts.tmp arch/arm/boot/dts/omap5-igep0050.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/omap5-igep0050.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -@ -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg  -d arch/arm/boot/dts/.omap5-igep0050.dtb.d.dtc.tmp arch/arm/boot/dts/.omap5-igep0050.dtb.dts.tmp ; cat arch/arm/boot/dts/.omap5-igep0050.dtb.d.pre.tmp arch/arm/boot/dts/.omap5-igep0050.dtb.d.dtc.tmp > arch/arm/boot/dts/.omap5-igep0050.dtb.d

source_arch/arm/boot/dts/omap5-igep0050.dtb := arch/arm/boot/dts/omap5-igep0050.dts

deps_arch/arm/boot/dts/omap5-igep0050.dtb := \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  arch/arm/boot/dts/omap5-board-common.dtsi \
  arch/arm/boot/dts/omap5.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/bus/ti-sysc.h \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  scripts/dtc/include-prefixes/dt-bindings/pinctrl/omap.h \
  scripts/dtc/include-prefixes/dt-bindings/clock/omap5.h \
  arch/arm/boot/dts/omap4-cpu-thermal.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/thermal/thermal.h \
  arch/arm/boot/dts/omap5-gpu-thermal.dtsi \
  arch/arm/boot/dts/omap5-core-thermal.dtsi \
  arch/arm/boot/dts/omap5-l4.dtsi \
  arch/arm/boot/dts/omap54xx-clocks.dtsi \
  arch/arm/boot/dts/omap5-l4-abe.dtsi \

arch/arm/boot/dts/omap5-igep0050.dtb: $(deps_arch/arm/boot/dts/omap5-igep0050.dtb)

$(deps_arch/arm/boot/dts/omap5-igep0050.dtb):
