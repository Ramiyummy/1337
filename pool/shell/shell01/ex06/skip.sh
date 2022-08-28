#!/bin/bash

ls -l | awk 'NR % 2 == 1'

# NR : number of lines has been recorded so far .
