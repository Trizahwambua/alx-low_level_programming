#!/bin/bash
gcc -S -o "${CFILE%.c}.s" $CFILE
