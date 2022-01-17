import os


def start_openOcd():
    os.system('start cmd /K "C:\\OpenOcd\\xpack-openocd-0.11.0-3\\bin\\openocd.exe -f C:\\OpenOcd\\xpack-openocd-0.11.0-3\\scripts\\board\\st_nucleo_446re.cfg"')

    
def start_Gdb():
    os.system('start cmd /K "arm-none-eabi-gdb -ix gdbCommands.txt')


if __name__ == "__main__":
    start_openOcd()
    start_Gdb()
    pass
    
