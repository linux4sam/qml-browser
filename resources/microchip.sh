#! /bin/sh

cd "$(dirname "$0")/.."
bin/browser -url='file:///opt/browser/resources/microchip_offline.html' $@
