#!/bin/bash

# Define arrays for each cargo bay's inventory
forward_bay=()
midship_bay=()
aft_bay=()

forward_bay+=("Space Suits")
forward_bay+=("Oxygen Tanks")
forward_bay+=("Repair Kits")
midship_bay+=("Food Supplies")
midship_bay+=("Water Containers")
midship_bay+=("Medical Equipment")
aft_bay+=("Spare Parts")
aft_bay+=("Fuel Cells")
aft_bay+=("Scientific Instruments")
# Check if an argument is provided
if [ $# -eq 0 ]; then
    echo "Please specify a cargo bay: forward, midship, or aft"
    exit 1
fi

# Display inventory based on the argument
if [ "$1" = "forward" ]; then
    echo "Forward Bay Inventory:"
    echo "1. ${forward_bay[0]}"
    echo "2. ${forward_bay[1]}"
    echo "3. ${forward_bay[2]}"
elif [ "$1" = "midship" ]; then
    echo "Midship Bay Inventory:"
    echo "1. ${midship_bay[0]}"
    echo "2. ${midship_bay[1]}"
    echo "3. ${midship_bay[2]}"
elif [ "$1" = "aft" ]; then
echo "Aft Bay Inventory:"
    echo "1. ${aft_bay[0]}"
    echo "2. ${aft_bay[1]}"
    echo "3. ${aft_bay[2]}"
else
    echo "Invalid cargo bay. Choose forward, midship, or aft."
    exit 1
fi

