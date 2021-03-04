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
                'input': """70 85 75 65 82 96 58 93 86 90""",
                'expected_output': """
The average is: 80 
The standard deviation is: 11.9 
Student: 1 2 3 4 5 6 7 8 9 10 
Grade: D C C F C A F A B B """,
                'exe': 'program.exe',
                'output_file': '_out',
            }),
            Run({
                'input': """50 60 70 70 70 70 70 70 80 100""",
                'expected_output': """
The average is: 71.0
The standard deviation is: 12.2
Student: 	1	2	3	4	5	6	7	8	9	10
Grades: 	F	D	C	C	C	C	C	C	B	A""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)