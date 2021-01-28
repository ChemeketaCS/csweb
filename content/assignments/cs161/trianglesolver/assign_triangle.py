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
                'input': """20 40 50""",
                'expected_output': """No answer""",
                'exe': 'program.exe',
            }),
            Run({
                'input': """10 20 100""",
                'expected_output': """No answer""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """12 20 35""",
                'expected_output': """B = 73 C = 72 OR B = 107 C = 38""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """28 15 100""",
                'expected_output': """32 48""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """20 10 45""",
                'expected_output': """21 114""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """5 10 30""",
                'expected_output': """60 90""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)