## Description

`xfakeevent` is a easy way to send fake button, motion and key events to the X.

## Synopsis

    Usage: xfakeevent [options]

    Options:
     -h [--help]
     -k [--key] key pressed delay
     -m [--motion] x y delay
     -b [--button] button pressed delay

     note: delay is in milliseconds

## Examples

    `xfakeevent -k Return 1 0`
        Pressed Return key.

    `xfakeevent --key Super_L 0 2000`
        Release left Super/Windows key after 2 seconds.

    `xfakeevent -m 150 300 1000`
        Move mouse pointer to x=150 y=300 coorinates after 1 second.

    `xfakeevent --motion 0 1000 0`
        Move mouse pointer to x=0 y=1000 coordinates instantaniously.

    `xfakeevent -b 1 1 0`
        Pressed left mouse button.

    `xfakeevent --button 3 0 1500`
        Pressed right mouse button after 1.5 seconds.

## Dependences

- xlib
- libXtst-devel

## Installation

    make
    sudo make install
