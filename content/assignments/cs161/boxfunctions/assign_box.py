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
                'input': """10 8""",
                'expected_output': """
Width   Length  Height  Volume  Waste Area
8       6       1       48      4
6       4       2       48      16
4       2       3       24      36""",
                'exe': 'program.exe',
                'output_file': '_out',
            }),
            Run({
                'input': """6 12""",
                'expected_output': """
Width   Length  Height  Volume  Waste Area
4       10      1       40      4
2       8       2       32      16""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)