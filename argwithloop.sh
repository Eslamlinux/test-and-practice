#!/bin/bash

echo "total num of arg : $#"
echo "all arg: "

counter=1
for arg in "$@"; do
    echo "arg $counter: $arg"
    counter=$((counter+2))
done
