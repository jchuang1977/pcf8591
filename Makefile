
all:pcf8591_led_trigger

pcf8591_led_trigger:
	gcc -o $@ $@.c -lwiringPi
