#!/bin/sh

INTERNAL=$(cat /sys/class/power_supply/BAT0/capacity)
STATUS=$(cat /sys/class/power_supply/BAT0/status)

if [ "$STATUS" = "Charging" ]; then
    echo "^$INTERNAL%"
else
    echo "$INTERNAL%"
fi

