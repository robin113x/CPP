#!/bin/bash
read -p "Enter the message" MESSAGE
git add *
git commit -m '${MESSAGE}'
git push