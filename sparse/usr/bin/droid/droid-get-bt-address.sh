#!/bin/bash
BT=$(cat /sys/kernel/debug/bluetooth/hci0/identity | cut -d ' ' -f 1)
echo $BT > /var/lib/bluetooth/board-address
