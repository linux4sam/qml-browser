#! /bin/sh

cd "$(dirname "$0")/.."
bin/browser -platform linuxfb -url=$1
