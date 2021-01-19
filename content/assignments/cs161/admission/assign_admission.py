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
                'input': """2.5 2300""",
                'expected_output': """Admit""",
                'exe': 'program.exe',
            }),
            Run({
                'input': """2.5 2200""",
                'expected_output': """Admit""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """1.5 1000""",
                'expected_output': """Deny""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.44 2100""",
                'expected_output': """Admit""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.44 2000""",
                'expected_output': """Waitlist""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.0 1500""",
                'expected_output': """Waitlist""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.0 1200""",
                'expected_output': """Deny""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.7 2000""",
                'expected_output': """Admit""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.6 1400""",
                'expected_output': """Waitlist""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.6 1100""",
                'expected_output': """Waitlist""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """3.5 1000""",
                'expected_output': """Deny""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
            Run({
                'input': """4.2""",
                'expected_output': """Admit""",
                'exe': 'program.exe',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)