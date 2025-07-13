<h1 align="center">
  <br>
  <a href="https://notaroomba.dev"><img src="https://raw.githubusercontent.com/NotARoomba/Linea/main/assets/final_cad.png" alt="Linea" width="200"></a>
  <br>
  Linea
  <br>
</h1>

<h4 align="center">Project files for a custom EMR tablet from scratch.</h4>

<div align="center">

![Python](https://img.shields.io/badge/python-%233776AB.svg?style=for-the-badge&logo=python&logoColor=white)
![Fusion 360](https://img.shields.io/badge/fusion%20360-%23F78F1E.svg?style=for-the-badge&logo=autodesk&logoColor=white)
![KiCad](https://img.shields.io/badge/kicad-%2300578F.svg?style=for-the-badge&logo=kicad&logoColor=white)

</div>

<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#case-and-cad">Case & CAD</a> •
  <a href="#pcb">PCB</a> •
  <a href="#bom">BOM</a> •
  <a href="#credits">Credits</a> •
  <a href="#license">License</a>
</p>

<!---
![schematic](https://raw.githubusercontent.com/NotARoomba/Linea/main/assets/schematic.png)
![pcb](https://raw.githubusercontent.com/NotARoomba/Linea/main/assets/pcb.png)
![build](https://raw.githubusercontent.com/NotARoomba/Linea/main/assets/windowed.png)
--->

## Key Features

- ~500kHz scanning rate
- Large (170x110mm) drawing area
- Bluetooth support (via STM32)
- USB-C for data and charging
- ~~Pen~~ (for another version)

## Case and CAD

The case includes:

- 3D printed parts: a base and a top cover
- Snap-fit case

Designed in Fusion 360.

<img src="assets/final_cad_top.png" alt="CAD model" width="500"/>
<img src="assets/final_cad.png" alt="CAD model" width="500"/>

## PCB

Designed in KiCad. Notable points:

- STM32WB55RGV6TR for bluetooth support
- LiPo battery charging circuit
- USB-C
- 2 ground planes
- FPC touchpad

The PCB has 2 components, the FPC coil grid and the main board.

<img src="assets/fpc.png" alt="FPC board" width="500"/>

<img src="assets/final_pcb.png" alt="CAD model" width="500"/>
<img src="assets/schematic.png" alt="CAD model" width="500"/>

## BOM

| Item      | Price (USD) | Source |
| --------- | ----------- | ------ |
| FPC Board | 47.67       | JLCPCB |

## Credits

This project uses:

- [KiCad](https://www.kicad.org/)
- [STM32MX](https://www.st.com/en/development-tools/stm32cubemx.html)
- [Fusion 360](https://www.autodesk.com/products/fusion-360/overview)

## You may also like...

- [Niveles De Niveles](https://github.com/NotARoomba/NivelesDeNiveles) – Real-time flood alert app
- [ROCKETMEN](https://github.com/NotARoomba/ROCKETMEN) – Custom flight controller files
- [Tamaki](https://github.com/NotARoomba/Tamaki) – A cute HackPad

## License

MIT

---

> [notaroomba.dev](https://notaroomba.dev) &nbsp;&middot;&nbsp;
> GitHub [@NotARoomba](https://github.com/NotARoomba)
