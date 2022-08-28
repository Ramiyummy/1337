#!/bin/bash

ifconfig -a | grep "ether" | sed -En 's/.ether//p' | tr -d ' '

#ifconfig | awk '/ether/ {print $2}'
