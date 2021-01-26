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
                'input': """200 100""",
                'expected_output': """Hits wall""",
                'exe': 'program.exe',
            }),
            Run({
                'input': """2 100""",
                'expected_output': """Hits wall""",
                'exe': 'program.exe',
            }),
            Run({
                'input': """2 100""",
                'expected_output': """Hits wall""",
                'exe': 'program.exe',
            }),
            Run({
                'input': """200 105""",
                'expected_output': """342.667 - too short""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """200 125""",
                'expected_output': """485.64ft - too far""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """200 110""",
                'expected_output': """376.079 feet""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """300 125""",
                'expected_output': """485.64 feet""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)