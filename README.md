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
`xfakeevent --key Super_L 0 2000`
`xfakeevent -m 150 300 1000`
`xfakeevent --motion 0 1000 0`
`xfakeevent -b 1 1 0`
`xfakeevent --button 3 0 1500`

## Dependences

- xlib
- libXtst-devel

## Installation

    make
    sudo make install
