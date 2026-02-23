# Bad Apple Tray

Animate Bad Apple (or any video) on the Windows tray.

## Get dependencies

I use opencv and pillow to convert the video into frames so you'll have to install them (`python -m pip install opencv-python pillow`)

## Compile

```bat
python main.py video.mp4 main.rc frames
rem use this command to get total frames
rem dir /b frames | find /c /v ".gitkeep"
rem then update main.c accordingly
windres main.rc main.o
gcc main.c main.o -o main
```