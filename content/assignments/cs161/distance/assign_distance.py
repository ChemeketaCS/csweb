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
                'input': """87""",
                'expected_output': """0 mile(s)
2 yard(s)
1 foot/feet
3 inch(es)""",
                'output_file': '_one',
                'max_time': 30,
                'exe': 'one.exe',
            }),
            Run({
                'input': """10000""",
                'expected_output': """1 mile(s)
1017 yard(s)
2 foot/feet
4 inch(es)""",
                'output_file': '_one',
                'append_output_file': True,
                'max_time': 30,
                'exe': 'one.exe',
            }),
            Run({
                'input': """20 9.8""",
                'expected_output': """20.4082""",
                'output_file': '_two',
                'max_time': 30,
                'exe': 'two.exe',
            }),
            Run({
                'input': """12.5 24.8""",
                'expected_output': """3.1502""",
                'output_file': '_two',
                'append_output_file': True,
                'max_time': 30,
                'exe': 'two.exe',
            })
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)