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
                'input': """43214321""",
                'expected_output': """Invalid - Visa""",
                'exe': 'program.exe',
                'output_file': '_out',
            }),
            Run({
                'input': """79927398713""",
                'expected_output': """Valid - Unknown""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
            Run({
                'input': """4034123412341234""",
                'expected_output': """Valid - Visa""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
            Run({
                'input': """54320""",
                'expected_output': """Valid - Mastercard""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
            Run({
                'input': """34223""",
                'expected_output': """Valid - AmEx""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)