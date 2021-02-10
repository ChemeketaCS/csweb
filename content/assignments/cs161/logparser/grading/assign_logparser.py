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
        'copy_files': ['makefile', 'WebLog.txt']
    }),
    Task({
        'name': 'make', 
        'makefile': 'makefile'
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'input': """ """,
                'expected_output': """
Name              Date          Time        Minutes
chardwick0        4/9/18        5:54PM      1
dgounin4          4/19/18       3:26AM      13
cbridgewaterb     4/2/18        2:24AM      5
btraite2n         4/9/18        4:19AM      6
""",
                'exe': 'program.exe',
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)