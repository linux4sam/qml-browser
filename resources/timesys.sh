#! /bin/sh

cd "$(dirname "$0")/.."
bin/browser -platform linuxfb -plugin tslib:/dev/input/event1 -plugin evdevkeyboard:/dev/input/event0 -url='../../resources/index_timesys.html'
