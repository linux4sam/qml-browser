#! /bin/sh

cd "$(dirname "$0")/.."
bin/browser -plugin tslib:/dev/input/event1 -plugin evdevkeyboard:/dev/input/event0 -url='../../resources/microchip_offline.html'
