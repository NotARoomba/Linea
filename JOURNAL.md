---
title: "Linea"
author: "Nathan Alspaugh (NotARoomba)"
description: "An EMR based drawing tablet (like a Wacom) from scratch!"
created_at: "2025-06-20"
time_spent: ~64 Hours
---

# July 20-22: Brainstorming and Research

I was initially inspired to start this project after the principal of my school promised me a Wacom One because of my academic excellence, but after some time I never recieved the tablet so I decided to make my own. I then looked up to see if I could find some inspiration and I found a [YouTube video](https://www.youtube.com/watch?v=igVscvWAR1s) (<10K views) of someone actually making and studying the pencils from common drawing tablets.

EMR tablets work based off of inductors (coils) being able to b affected by magnetic fields and being able to turn such fields into electricity (with some caveats). The tablet has a grid of coils ith AC current flowing through them, this alternation causes a magnetic field to form. THis magnetic field is especially useful because if another inductor coms close to the field, it can recive a bit of current and using a capacitor, it can be stored. This is the basic principle of how those pens manage to work without batteries.

I saw that he originally made on to convert a laptop into a drawing tablet so I kinda wanted to do the same but with some improvements:

- USB-C
- Bluetooth
- Custom software to configure pen sensitivity

As the original tablet neded a wired connection I decided that this would be a fun challenge to tackle.

After looking through the repository on GitLab and opeing up the schematics for the tablet (more specifically the coil grid) I was greeted with this:

![alt text](/assets/original_flex.png)
(look at all those coils)

While I could copy it, I wanted a tablet under 200mm and also to be able to understand it. So I looked through some [patents](https://patents.google.com/patent/US4634973A) that were referenced in the YouTube video and found that that the coils could be made up of any number of turns, in this case 3 turns (better pen detection).

I plan on making 3 components, a flexible circuit that recives the signal from the pen, a central "motherboard" that processes the signal from the FPC, and finally a ~~pen that can interact with the tablet~~ (seperate project).

**Time Spent:** 2 Hours

# June 23: FPC Design

I started by using a script to make one side of the coils.

![alt text](/assets/coil_template.png)

I then had to connect them in a way so that they looped around like in the original schematic

![alt text](/assets/original_side.png)
(orignal)

![alt text](/assets/custom_side.png)
(mine after complting the horizontal coils)

**Time Spent:** 5 Hours

# June 24: FPC continued...

After a while I got the Y-plane done

![alt text](/assets/y_plane.png)

but thats when I recieved a response from the original creator about a question I had about the coil design. Originally the coils looked like this, and I had a question as to why the middle loop wasn't connected to anything. Apparently that was a bug... after all that wiring...

![alt text](/assets/old_coil.png)
(old coil)

![alt text](/assets/new_coil.png)
(new coil)

I asked few more questions that helped clarify things like the trace width and how to efficently connect all the components and got to work on a new design. (by hand)

![alt text](/assets/new_design.png)

After a few hours of tweaking I finally got the right design.
![alt text](/assets/new_grid.png)

**Time Spent:** 7 Hours

# June 25: Rewiring (again...)

After yesterday's fail I decided to take a break and then start the wiring again, I didn't make much progress today but I got both axis done.

**Time Spent:** 1 Hour

# June 29: Finished FPC

FInally after working all day (took a few days off), I finally completed the FPC.

![alt text](/assets/fpc.png)

The supposed active area is 170x110mm which I think is pretty good.

Now I'm going to start research on the main board that connects to the FPC. I want it to have bluetooth and a good battery life so I chose the STM32WB55. I'll be using the Flipper Zero's schematics to wire it up as it uses the same chip.

**Time Spent:** 8 Hours

# June 30: Main Board Schematic

After researching and compiling schematics, I started work on creating the schematic for the board that will handle the connection from the touchpad and also bluetooth. I took inspiration from the connections for power and battery from the Flipper Zero docs and also the analog circuits from [Patchouli's repository](https://gitlab.com/yukidama/patchouli).

![alt text](/assets/schematic.png)

**Time Spent:** 6 Hours

# July 1: Main Board PCB

After finishing the schematic, I decided to take a break and plan what I had to do next in order of importance.

- Double triple check schematic
- Create main board PCB
- Fix FPC board to have 0.2mm trace spacing
- Create case in Fusion360
- (Optionally create pencil)

# July 3: Fix FPC Board

My OCD wouldn't let me move on until I'd fixed spacing on the board so I redid the coils and added everything again.

**Time Spent:** 4 Hours

# July 5-10: Main Board PCB (finally)

I started work on making the PCB and after watching a few tutorials on analog signals and pcb design (thanks Phil's Lab) I felt confident in starting to design the PCB.

I started by grouping all the components together based on the schematic and also taking refrence from the other designs in Patchouli (dont have many pictures as I was locked in). I then started wiring again taking inspiration from the schmatics using wider traces for power and ground and thn smaller traces for the data lines and analog crcuits. I also split the schematic into 2 ground planes. One for analog ground and another for the digital ground.

![alt text](/assets/analog_ground.jpg)
(was already done placing the components)

After wiring a bit I finished the design (almost) but I had forgot on important part, the Blutooth chip.

![alt text](/assets/finished_wiring.png)
(finished wireup)

It was gonna be tricky because the rf pin is on the top of the chip.

![alt text](/assets/i_hate_rf_and_blutooth_please_help.png)

but I have a 4-layer stackup so I worked on allowing a clear path for the RF trail...

**Time Spent:** 22 Hours

# July 11-12: Bluetooth Trail

After watching a few tutorials and looking at the datasheets for the STM32, I added the recommended low pass filter (also from STM).

I looked through the datasheets for the chip and found that I needed to ground EVERYTHING. So I then cleared up the buttons and moved them out of the way to create this monstrocity.

![alt text](/assets/ble_trail.png)

Aftre complting that, I fixd som DRC errors and finished the board!

**Time Spent:** 4 Hours

# July 12: CAD Design

I wanted a simple 3D printed case so I opened up Fusion360 and started work.

After a bit of designing I ended up with this.

![alt text](/assets/case_bottom.png)

I added a 'hook" so that the lid can snap onto the case.

![alt text](/assets/side_hook.png)

But then after adding the components I as left with the top FPC connector a bit misaligned...

![alt text](/assets/misaligned_fpc.png)

So I went back to KiCad and rewired it.

![alt text](/assets/fpc_rewire.png)

After adding the other battery and testing the USB-C port, I finished the case design

![alt text](/assets/final_cad.png)

![alt text](/assets/final_cad_top.png)

**Time Spent:** 5 Hours

# July 13: JLCPCB Quote

I added all the designators and LCSC part numbers to the properties of each part and got a subtotal of ~207$ for the main board and ~48$ for the FPC

![alt text](/assets/prices.png)
