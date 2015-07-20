# Monster

* Measure distance with a PING))) 
* Playback  Audio (WAV) files from SD Card using the 8-bit DAC
* Control a Servo ... 

Needs:

* Device: PIC16F1709 (or other PIC16F1 in 20-pin DIP with 8-bit DAC, SPI and OPA)
* Board: PICDEM(tm) Low Pin Count + mikroBUS connector = [Simplicity](https://github.com/luciodj/Simplicity) 
* microSD Click© board or prototyping 
* Parallax PING))) module
* Mini Servo 
* USB to 5V and 3V adapter (MCP2221?)
* Debugger: PICkit© 3

## The Basic Idea
1. Add a [MikroBUS](http://www.mikroe.com/mikrobus/) connector to the Simplicity board 
2. Connect a microSD Click© board (3V), PING)) (5V) and Servo
3. Launch MPLAB X and MPLAB Code Configurator to quickly initialise all the peripherals
4. Play Cookie Monster...


## Related Projects and Demos

* Check the [Simplicity](https://github.com/luciodj/Simplicity) project for more demo like this using the MPLAB Code Configurator and the MikroElektronika Click(tm) boards.
