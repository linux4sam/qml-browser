#!/bin/sh

eval "$DEMO_LEAVE"

cd "$(dirname "$0")/.."
bin/browser $@

eval "$DEMO_ENTER"
