import os
import subprocess
import time
import pyautogui
import pathlib

details = 'Arya Anand 200968102 28-08-2021'
dir = 'answers\\answers3'
fake_path = str(pathlib.Path().resolve()) + dir
exe = '.exe'


def main():
    for i, file_name in enumerate(os.listdir(dir), 1):
        if file_name.endswith('.c'):
            start_time = time.time()
            subprocess.call('cls', shell=True)
            subprocess.call(f'title {fake_path + str(i) + exe}', shell=True)
            print(details)
            subprocess.call(['gcc', dir+file_name])
            subprocess.call("a")
            print(f'\nProcess returned 0 (0x0)  execution time : {round(time.time() - start_time,2)}')
            print('Press anykey to continue.')
            pyautogui.hotkey('win', 'alt','printscreen')
            time.sleep(0.8)
    
if __name__ == '__main__':
    main()

