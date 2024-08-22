#!/bin/bash

if [ "$#" -eq 0 ]; then
    echo "No arguments supplied"
else
    for arg in "$@"
    do
        mkdir "ex$arg"
    done
fi


if = si condition vraie (suivi de then (then = alors))
else = sinon (si la condition du if est fausse, toujours apres un if)
while = tant que la condition est vraie
for = tant que répété X fois