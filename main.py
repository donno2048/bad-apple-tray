from sys import argv
from PIL.Image import fromarray
from cv2 import VideoCapture, resize
vidcap, index = VideoCapture(argv[1]), 0
open(argv[2], "w").close()
with open(argv[2], "a") as file:
	while (frame := vidcap.read())[0]:
		file.write(f"{index} ICON \"{argv[3]}/{index}.ico\"\n")
		fromarray(resize(frame[1], (48,)*2)).save(f"{argv[3]}/{index}.ico", format='ICO')
		index += 1


