#!/bin/bash -e
#This called by webhook, run as ascholer

GIT_SSH_COMMAND='ssh -i /home/ascholer/.ssh/id_rsa -o IdentitiesOnly=yes'


git fetch --all
git reset --hard origin/master


hugo --environment production --minify
