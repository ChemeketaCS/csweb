#!/usr/bin/env python3

# Allow relative import of pygrader. Not needed if pygrader package is installed on python search path
import os
import sys
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'copy', 'copy_files': ['OfficialMake', 'people.txt', 'peopleSorted.txt']
    }),
    Task({
        'name': 'rename', 'rename_folders': True
    }),
    Task({
        'name': 'make', 'makefile': 'MyMake'
    }),
    Task({
        'name': 'makeOfficial', 'makefile': 'OfficialMake'
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'input': """5000""",
                'output_file': '_plain_run',
                'max_time': 30,
                'exe': 'linux/assign1.exe',
            }),
            Run({
                'input': """100""",
                'output_file': '_drmemory_run',
                'max_time': 30,
                'exe': 'linux/assign1.exe',
                'use_drmemory': True,
            })
        ]
    }),
    Task({
        'name': 'list',
        'git_list': 'cs260-202020-a01'
    }),
    
    Task({
        'name': 'clone',
        'git_clone': 'cs260-202020-a01'
    }),
]

#starts up the task processor
pygrader.execute(tasks)