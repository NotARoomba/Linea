<h1 align="center">
  <br>
  <a href="https://notaroomba.dev"><img src="https://raw.githubusercontent.com/NotARoomba/Linea/main/assets/logo.png" alt="Linea" width="200"></a>
  <br>
  Linea
  <br>
</h1>

<h4 align="center">
Project files for a custom EMR tablet from scratch.

Inspired by [Project Patchouli](https://gitlab.com/yukidama/patchouli).

</h4>

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

### FPC

<img src="assets/fpc.png" alt="FPC board" width="500"/>

### Main Board

<img src="assets/schematic.png" alt="CAD model" width="500"/>
<img src="assets/final_pcb.png" alt="CAD model" width="500"/>
<img src="assets/3d_pcb.png" alt="CAD model" width="500"/>
<img src="assets/prices.png" alt="CAD model" width="500"/>

## BOM

| Item         | Price (USD) | Source                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| ------------ | ----------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| FPC Board    | 48.67       | JLCPCB                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| Main Board   | 207.14      | JLCPCB                                                                                                                                                                                                                                                                                                                                                                                                                                                          |
| Test Pen     | 12.35       | [Aliexpress](https://www.aliexpress.com/item/1005001860233195.html?spm=a2g0o.productlist.0.0.111a75d5sBjHGs&mp=1&pdp_npi=5%40dis%21COP%21COP%2077314.30%21COP%2049500.76%21%21COP%2049500.76%21%21%21%40210337bc17525387622585637ecb2a%2112000017887624552%21ct%21CO%216414363499%21%211%210) |
| LiPo 1200mAh | 12.00       | [Online Marketplace](https://articulo.mercadolibre.com.co/MCO-897219547-bateria-37v-1200mah-litio-lipo-35-x-6cm-ancho-05cm-_JM#polycard_client=search-nordic&position=31&search_layout=stack&type=item&tracking_id=64c5a1d6-adab-4203-b581-c1839af5c176&wid=MCO897219547&sid=search)                                                                                                                                                                            |
| **Subtotal** | 280.16      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| **Shipping** | 30.00       | Estimated                                                                                                                                                                                                                                                                                                                                                                                                                                                       |
| **Total**    | 310.16      |                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |


<!-- https://articulo.mercadolibre.com.co/MCO-568567056-lapiz-repuesto-tabla-digitalizadora-xp-pen-p03-no-wacom-_JM?searchVariation=176600496495#is_advertising=true&searchVariation=176600496495&backend_model=search-backend&position=8&search_layout=stack&type=pad&tracking_id=9f203117-ca3d-40ac-bdf1-dadf37d1ff62&is_advertising=true&ad_domain=VQCATCORE_LST&ad_position=8&ad_click_id=YjFjZWVmY2UtZGUwNi00Y2Y4LTk2NDktMmQ1NjNhZGUyMzNj -->

## Credits

- [Project Patchouli](https://gitlab.com/yukidama/patchouli)
- [Flipper Zero](https://docs.flipper.net/development/hardware)
- Check `/references` for more information

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
