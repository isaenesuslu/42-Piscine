#!/bin/sh
ip link | grep link/ether | awk '{print $2}'
