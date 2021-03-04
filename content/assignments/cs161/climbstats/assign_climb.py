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
                'input': """1200 3000 3450 2800 2900 1550 1750 1110 1200 """,
                'expected_output': """
Highest points: 
   First Half: 3450
   Second Half: 1750
   Overall: 3450
Average elevation: 2106.67
Peaks: 3
Difficult segments: 2
Elevation change: 5280""",
                'exe': 'program.exe',
                'output_file': '_out',
            }),
            Run({
                'input': """5000 4500 500 600 6900 5900 1000 1000 2100 """,
                'expected_output': """
Highest points:
   First half: 6900
   Second half: 5900
   Overall: 6900
Average elevation: 3055.56
Peaks: 1
Difficult segments: 4
Elevation change: 17900""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)