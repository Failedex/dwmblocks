#!/bin/bash

MUTED=$(pacmd list-sinks | awk '/muted/ { print $2 }' | grep "no")

if [[ -z "$MUTED" ]]; then
    echo "^c#f38ba8^ 󰝟  Muted "
else 
    echo -n "^c#f38ba8^ 󰕾  "
    amixer sget Master | grep 'Left:' | awk -F'[][]' '{ print $2 }'  
fi
