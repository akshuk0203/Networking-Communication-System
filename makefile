all: system
	gnome-terminal -- bash -c "./system utoob1; exec bash"
	gnome-terminal -- bash -c "./system utoob2; exec bash"
	gnome-terminal -- bash -c "./system utoob3; exec bash"
	gnome-terminal -- bash -c "./system utoob4; exec bash"
	

system: system.c
	gcc -o system system.c

ear: ear.c
	gcc -o ear ear.c

mouth: mouth.c
	gcc -o mouth mouth.c

brain: brain.c
	gcc -o brain brain.c


