#!/bin/bash

INTERNAL=$(cat /sys/class/power_supply/BAT0/capacity)
STATUS=$(cat /sys/class/power_supply/BAT0/status)

echo -n "^c#f9e2af^ "

if [[ "$STATUS" == "Charging" ]]; then
    echo -n "󰂄 "
else
    echo -n "󰁹 "
fi
echo "$INTERNAL%"
