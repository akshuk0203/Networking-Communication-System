# Networking-Communication-System

This project implements a networking communication system that allows multiple systems to operate simultaneously on a local device, each identified by a unique system name and port number.

ear.c: Responsible for continuously listening for incoming messages from various systems. It receives UDP packets and processes them for further handling.

brain.c: Acts as an intermediary between ear.c and mouth.c. It processes incoming messages from ear.c and manages the overall communication logic.

mouth.c: Responsible for sending messages to the chosen system when a user decides to communicate. It uses UDP packets for message transmission, ensuring efficient communication
