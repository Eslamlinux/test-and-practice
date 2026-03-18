#!/bin/bash

if[ $# -eq 0 ]; then
echo "Script name: $make push to git direct"
elif[ $# -q 1 ]; then
echo "First argument: $git add ."
elif [ $# -q 2 ]; then
echo "second arg: $git commit -m""up"""
else
echo "third arg: $git push"
fi
