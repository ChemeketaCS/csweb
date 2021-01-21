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
                'input': """50 1""",
                'expected_output': """Not available""",
                'exe': 'program.exe',
            }),
            Run({
                'input': """100 1""",
                'expected_output': """150""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """500 1""",
                'expected_output': """550""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """50 2""",
                'expected_output': """61""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """300 2""",
                'expected_output': """316""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """301 2""",
                'expected_output': """301""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """20 3""",
                'expected_output': """25""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """35 3""",
                'expected_output': """43""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """100 3""",
                'expected_output': """100""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """150.25 8""",
                'expected_output': """Bad input""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)