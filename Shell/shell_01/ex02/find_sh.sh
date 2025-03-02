#!/bin/sh
find. name -iname '*.sh' | xargs -n 1 {} basename -s .sh {}
