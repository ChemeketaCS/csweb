#!/usr/bin/env python3

# Allow relative import of pygrader. Not needed if pygrader package is installed on python search path
import os
import sys
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'sort_files',
        'sort_files': True,  
    }),
    Task({
        'name': 'copy', 
        'copy_files': ['makefile']
    }),
    Task({
        'name': 'make', 
        'makefile': 'makefile'
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'input': """200 8.5 6""",
                'expected_output': """
1 / 1 / 200.00
1 / 2 / 401.36
1 / 3 / 604.10
1 / 4 / 808.22
1 / 5 / 1013.74
1 / 6 / 1220.65
1 / 7 / 1428.98
1 / 8 / 1638.73
...
6 / 12 / 18514.05""",
                'exe': 'program.exe',
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)