# simple-serial-char-driver
This driver very useful for new learner 
In this driver having simple steps for creating ur new driver .
Let ride the kernel with ur skills

Steps To Build:
1. Download the code , and extract the code .
2. Make file, help you to do  build the driver.
3. Add the driver name in Makefile.
4. Open the Terminal , ctrl+alt+t
5. Open the folder: cd simple-serial-char-driver
6. just do make : make
The above steps help you to build the code.
Do you know...? Next level steps.....
Dont worry ... I will help yo...! Check below...

After make, if the driver compiled properly ,find the .ko file.
1. Load the driver in kernel, execute the below command in terminal
2. insmod simple_char.ko
3. Successfully loaded ? not right just give root permissions
4. chack your prints in dmesg .
