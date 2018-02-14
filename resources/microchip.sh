#!/bin/sh

eval "$DEMO_LEAVE"

cd "$(dirname "$0")/.."
bin/browser -url='file:///opt/browser/resources/microchip_offline.html' $@

eval "$DEMO_ENTER"
