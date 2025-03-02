#!/bin/sh
ip l | grep link/ether | awk '{print $2}'
