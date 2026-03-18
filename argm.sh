#!/bin/bash

if [ $# -eq 0 ]; then
  echo "No arguments provided."
elif [ $# -eq 1 ]; then
  echo "One argument provided: $1"
elif [ $# -eq 2 ]; then
  echo "Two arguments provided: $1 and $2"
elif [ $# -eq 3 ]; then
#   echo  "third arg:>> $3"
git add .; git commit -m "up" ;git push
else
  echo "More than two arguments provided:"
  echo "First argument: $1"
  echo "Second argument: $2"
  echo "Third argument: $3"
  echo "Total number of arguments: $#"
fi
