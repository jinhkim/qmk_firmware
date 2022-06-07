## Just so I don't forget

### Prerequisites
Linux packages:
```
sudo apt install make avr-gcc gcc-avr avr-libc avrdude bison binutils dfu-programmer
```

### Flashing

```
make [MAKE]/[MODEL]:[LAYOUT]:[FLASHTOOL]
```

e.g.
```
make keebio/quefrency:myfrency:dfu
make dz60:coffee_house:dfu
```
