#!/bin/bash

NUMBERS+=(1)
NUMBERS+=(2)
NUMBERS+=(3)

STRINGS+=("hello")
STRINGS+=("world")

NAMES+=("John")
NAMES+=("Eric")
NAMES+=("Jessica")

NumberOfNames=${#NAMES[@]

second_name=${NAMES[1]}

echo "NUMERS array: ${NUMBERS[@]}"
echo "STRINGS array: ${STRINGS[@]}"
echo "The nember of names listed in NAMES array: $NumberOfNames"
echo "The second name on the NAMES list is: $second_name"}

