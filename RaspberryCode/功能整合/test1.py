import RPi.GPIO as GPIO
import time
from timeit import timeit
GPIO.cleanup()
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)

PIN_NO = 17
PIN = 18
TRIG1 = 2
ECHO1 = 3

TRIG2 = 5
ECHO2 = 6

TRIG3 = 16
ECHO3 = 20



def beep(seconds):
    GPIO.output(PIN_NO, True)
    time.sleep(seconds)
    GPIO.output(PIN_NO, False)

def beepAction(secs, sleepsecs, times):
    for i in range(times):
        beep(secs)
        time.sleep(sleepsecs)    

def checkdist1():
    GPIO.output(TRIG1, GPIO.HIGH)
    time.sleep(0.000015)
    GPIO.output(TRIG1, GPIO.LOW)
    while not GPIO.input(ECHO1):
        pass
    t1 = time.time()
    while GPIO.input(ECHO1):
        pass
    t2 = time.time()
    return (t2 - t1) * 340 / 2

def checkdist2():
    GPIO.output(TRIG2, GPIO.HIGH)
    time.sleep(0.000015)
    GPIO.output(TRIG2, GPIO.LOW)
    while not GPIO.input(ECHO2):
        pass
    t1 = time.time()
    while GPIO.input(ECHO2):
        pass
    t2 = time.time()
    return (t2 - t1) * 340 / 2

def checkdist3():
    GPIO.output(TRIG3, GPIO.HIGH)
    time.sleep(0.000015)
    GPIO.output(TRIG3, GPIO.LOW)
    while not GPIO.input(ECHO3):
        pass
    t1 = time.time()
    while GPIO.input(ECHO3):
        pass
    t2 = time.time()
    return (t2 - t1) * 340 / 2

    
def p1(): 
    TRIG1 = 2
    ECHO1 = 3

    TRIG2 = 5
    ECHO2 = 6

    TRIG3 = 16
    ECHO3 = 20


    GPIO.setup(PIN_NO, GPIO.OUT)

    GPIO.setup(TRIG1, GPIO.OUT, initial=GPIO.LOW)
    GPIO.setup(ECHO1, GPIO.IN)

    GPIO.setup(TRIG2, GPIO.OUT, initial=GPIO.LOW)
    GPIO.setup(ECHO2, GPIO.IN)

    GPIO.setup(TRIG3, GPIO.OUT, initial=GPIO.LOW)
    GPIO.setup(ECHO3, GPIO.IN)

    time.sleep(2)
    m1, m2, m3 = 0, 0, 0

    times = 0
    time_try = time.time()
    while True:
        print("Distance1: {:.2f} m Distance2:{:.2f} m Distance3: {:.2f} m".format(checkdist1(), checkdist2(), checkdist3()))
        t1 = checkdist1()
        t2 = checkdist2()
        t3 = checkdist3()

        if (t1 > 0.20 and t1 < 0.30):
            m1 = 1
        if (t2 > 0.20 and t2 < 0.30):
            m2 = 1
        if (t3 > 0.20 and t3 < 0.30):
            m3 = 1
        if (m3 == 1 or m1 == 1 or m2 == 1):
            print("right")
            m1, m2, m3 = 0, 0, 0
            time.sleep(0.5)
            times = times + 1
            time_end = time.time()
            continue
        if (m1 == 0 and m2 == 0 and m3 == 0):
            beepAction(0.1, 0.1, 5)
            print('wrong')
            time_end = time.time()
            if (time_end - time_try > 5):
                break

    timesetup = 0
    times = 0
    beepAction(0.5, 0.5, 3)
    beep(2)
    time_start = time.time()
    print('go')
    try:
        while True:
            print("Distance1: {:.2f} m Distance2:{:.2f} m Distance3: {:.2f} m".format(
                checkdist1(), checkdist2(), checkdist3()))
            t1 = checkdist1()
            t2 = checkdist2()
            t3 = checkdist3()

            if (t1 > 0.20 and t1 < 0.30):
                m1 = 1
            if (t2 > 0.20 and t2 < 0.30):
                m2 = 1
            if (t3 > 0.20 and t3 < 0.30):
                m3 = 1
            if (m3 == 1 or m1 == 1 or m2 == 1):
                print("right")
                m1, m2, m3 = 0, 0, 0
                time.sleep(0.5)
                times = times + 1
                continue
            if (m1 == 0 and m2 == 0 and m3 == 0):
                timesetup = timesetup + 1
                beepAction(0.1, 0.1, 5)

                print('wrong')
            if (timesetup > 3):
                time_end = time.time()
                break

        timecontinue = times * 0.5
        print('time cost{:.2f}'.format(timecontinue), 's')

    except KeyboardInterrupt:
        GPIO.cleanup()


def light():
    i=0
    GPIO.setup(27,GPIO.OUT)
    while(i<5):
        GPIO.output(27,True)
        time.sleep(0.1)
        GPIO.output(27,False)
        i=i+1
        time.sleep(0.1)
        
def exec_cmd(key_val):
    if(key_val==0x45):
        print("Button CH-")
    elif(key_val==0x46):
        print("Button CH")
    elif(key_val==0x47):
        print("Button CH+")
    elif(key_val==0x44):
        print("Button PREV")
    elif(key_val==0x40):
        print("Button NEXT")
        light()
    elif(key_val==0x43):
        print("Button PLAY/PAUSE")
        p1()
    elif(key_val==0x07):
        print("Button VOL-")
    elif(key_val==0x15):
        print("Button VOL+")
    elif(key_val==0x09):
        print("Button EQ")
    elif(key_val==0x16):
        print("Button 0")
    elif(key_val==0x19):
        print("Button 100+")
    elif(key_val==0x0d):
        print("Button 200+")
    elif(key_val==0x0c):
        print("Button 1")
    elif(key_val==0x18):
        print("Button 2")
    elif(key_val==0x5e):
        print("Button 3")
    elif(key_val==0x08):
        print("Button 4")
    elif(key_val==0x1c):
        print("Button 5")
    elif(key_val==0x5a):
        print("Button 6")
    elif(key_val==0x42):
        print("Button 7")
    elif(key_val==0x52):
        print("Button 8")
    elif(key_val==0x4a):
        print("Button 9")


GPIO.setup(PIN,GPIO.IN,GPIO.PUD_UP)
print("irm test start...")

try:
    while True:
        if GPIO.input(PIN) == 0:
            count = 0
            while GPIO.input(PIN) == 0 and count < 200:
                count += 1
                time.sleep(0.00006)

            count = 0
            while GPIO.input(PIN) == 1 and count < 80:
                count += 1
                time.sleep(0.00006)

            idx = 0
            cnt = 0
            data = [0,0,0,0]
            for i in range(0,32):
                count = 0
                while GPIO.input(PIN) == 0 and count < 15:
                    count += 1
                    time.sleep(0.00006)

                count = 0
                while GPIO.input(PIN) == 1 and count < 40:
                    count += 1
                    time.sleep(0.00006)

                if count > 8:
                    data[idx] |= 1<<cnt
                if cnt == 7:
                    cnt = 0
                    idx += 1
                else:
                    cnt += 1
            if data[0]+data[1] == 0xFF and data[2]+data[3] == 0xFF:
                print("Get the key: 0x%02x" %data[2])
                exec_cmd(data[2])
except KeyboardInterrupt:
    GPIO.cleanup()
GPIO.cleanup()
