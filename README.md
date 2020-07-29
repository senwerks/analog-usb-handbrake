# Analog USB Handbrake for Racing Sims

A conversion kit to turn any real car handbrake (eg cheap drift/race handbrakes from eBay/Amazon) into an analog USB handbrake for racing sims.

## Required

- Cheap drift/race handbrake such as [this one](https://www.amazon.com.au/Kyostar-Universal-Hydraulic-Handbrake-Parking/dp/B07WPS87Y3/) (similar are available from all major online marketplaces)
- Spring/shock from a 1:10 RC car such as [this one](https://www.amazon.com.au/HobbyPark-Aluminum-Absorber-Brontosaurus-Replacement/dp/B01A0ZB95Y/).
- Arduino Pro Micro / Leonardo
- 10k sliding potentiometer
- Zip ties
- 3D printer



## Instructions

Attach [Potentiometer Bracket](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Potentiometer-Bracket.stl) to the front of the potentiometer.

![Potentiometer Bracket](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Meta/Analog-USB-Handbrake-Pot-Bracket-1.jpg)

Strip the handbrake of all non-required parts. You just need the handbrake lever itself and the supporting frame.

Screw the sliding pot bracket to the inside edge of the handbrake frame/chassis, using some of the leftover bolts from stripping the handbrake (I found I had more than enough). 

![Potentiometer Bracket](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Meta/Analog-USB-Handbrake-Pot-Bracket-2.jpg)

Print the [Shock Mount](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Rear-Shock-Mount.stl) and use another of the spare screws to attach it to the rear mount point, and zip-tie the other end to the handbrake shaft (I've clocked many hours on this setup now and the zip-tie has held fine).

![Finished Analog USB Handbrake](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Meta/Analog-USB-Handbrake-Finished.jpg)

Clip the [Connecting Arm](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Connecting-Arm.stl) to the potentiometer slider and then put a bolt through the other end to attach it to the handbrake lever itself. Ignore the spring, that was an earlier prototype, and if you can't get an RC shock, actually worked surprisingly well considering it's a cheap Gate spring from the hardware shop.

![Handbrake Lever Attached](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Meta/Analog-USB-Handbrake-Lever.jpg)

Flash [the Arduino code](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Arduino-Analog-USB-Handbrake/Arduino-Analog-USB-Handbrake.ino) onto the Arduino Leonardo/Pro Micro, and connect the wiring (Pot pin 1 to VCC, pot pin 2 to A0, and pot pin 3 to GND).

![Wiring Diagram](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Meta/Wiring-Diagram.png)

![Wiring Photo](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Meta/Analog-USB-Handbrake-Wiring.jpg)

Place the Arduino into the [Arduino Case](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Arduino-Case.stl) to insulate the back of the Arduino from touching the metal handbrake parts, and hot glue it into place, and optionally cover it with the 3D printed [Arduino Lid](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Arduino-Case.stl) (I did clear, so I can see the LEDs still).

Go get sideways!

![Analog USB Handbrake on the Sim](https://github.com/obsoletenerd/analog-usb-handbrake/blob/master/Meta/Analog-USB-Handbrake-On-Sim.jpg)