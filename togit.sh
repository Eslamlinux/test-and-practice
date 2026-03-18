#!/bin/bash
#
if [ $# -eq 1]; then
git add . ;git commit -m"echo $1" ;git push
fi
