#!/bin/bash

clear
find . -mindepth 2 -maxdepth 2 -type d \( -path ./.git/\* -o -path ./scripts/\* \) -prune -o -type d -print -exec make -C {} $1 \;
