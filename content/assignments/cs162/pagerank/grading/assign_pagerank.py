#!/usr/bin/env python3

# Allow relative import of pygrader. Not needed if pygrader package is installed on python search path
import os
import sys
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '../../pygrader')))

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'sort_files',
        'sort_files': True,  
    }),
    Task({
        'name': 'copy', 
        'copy_files': ['makefile','PageTester.cpp']
    }),
    Task({
        'name': 'make', 
        'makefile': 'makefile'
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'name': "tests",
                'input': """ """,
                'expected_output': """ """,
                'output_file': "_test_output",
                'exe': 'tests.exe'
            }),
            Run({
                'name': "main",
                'input': """ """,
                'expected_output': """ """,
                'output_file': "_main_output",
                'exe': 'program.exe'
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)