---
title: "Linea"
author: "Nathan Alspaugh (NotARoomba)"
description: "An EMR based drawing tablet (like a Wacom) from scratch!"
created_at: "2025-06-20"
time_spent: ~40 Hours
---

# July 20-22: Brainstorming and Research

I was initially inspired to start this project after the principal of my school promised me a Wacom One because of my academic excellence, but after some time I never recieved the tablet so I decided to make my own. I then looked up to see if I could find some inspiration and I found a YouTube video (<10K views) of someone actually making and studying the pencils from common drawing tablets.

EMR tablets work based off of inductors (coils) being able to b affected by magnetic fields and being able to turn such fields into electricity (ith some caveats). The tablet has a grid of coils ith AC current flowing through them, this alternation causes a magnetic field to form. THis magnetic field is especially useful because if another inductor coms close to the field, it can recive a bit of current and using a capacitor, it can be stored. This is the basic principle of how those pens manage to work without batteries.

I saw that he originally made on to convert a laptop into a drawing tablet so I kinda wanted to do the same but with some improvements:

- USB-C
- Bluetooth
- Custom software to configure

As the original tablet neded a wired connection I decided that this would be a fun challenge to tackle.

After looking through the repository on GitLab and opeing up th schematics for the tablet (more specifically the coil grid) I was greeted with this:

![alt text](images/original_flex.png)
(look at all those coils)

While I could copy it, I wanted a tablet under 200mm and also to be able to understand it. So I looked through some patents that were refrenced in the YouTube video and found that that the coils could be made up of any number of turns, in this case 3 turns (better pen detection).

I plan on making 3 components, a flexible circuit that recives the signal from the pen, a central "motherboard" that processes the signal from the FPC, and finally a pen that can interact with the tablet.

# June 23: FPC Design

I started by using a script to make one side of the coils.

![alt text](/images/coil_template.png)

I then had to connect them in a way so that they looped around like in the original schematic

![alt text](/images/original_side.png)
(orignal)

![alt text](/images/custom_side.png)
(mine after complting the horizontal coils)

# June 24: FPC continued...

After a while I got the Y-plane done

![alt text](/images/y_plane.png)

but thats when I recieved a response from the original creator about a question I had about the coil design. Originally th coils looked like this, and I had a question as to why the middle loop wasn't connected to anything. Apparently that was a bug... after all that wiring...

![alt text](/images/old_coil.png)
(old coil)

![alt text](/images/new_coil.png)
(new coil)

I asked few more questions that helped clarify things like the trace width and how to efficently connect all the components and got to work on a new design. (by hand)

![alt text](/images/new_design.png)

After a few hours of tweaking I finally got the right design.
![alt text](/images/new_grid.png)
