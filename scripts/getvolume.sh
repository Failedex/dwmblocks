#!/bin/sh

muted=$(pacmd list-sinks | awk '/muted/ { print $2 }' | grep "yes")

if [[ -n $muted ]]
then
    echo "Muted"
else 
    amixer sget Master | grep 'Left:' | awk -F'[][]' '{ print $2 }'  
fi
