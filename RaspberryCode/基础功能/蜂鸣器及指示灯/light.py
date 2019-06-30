import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
i=0
GPIO.setup(27,GPIO.OUT)
while(i<5):
    
    GPIO.output(27,True)
    time.sleep(0.1)
    GPIO.output(27,False)
    i=i+1
    time.sleep(0.1)
GPIO.cleanup()