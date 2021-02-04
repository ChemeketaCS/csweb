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
                'input': """1000 200 15.5""",
                'expected_output': """
0				        1000.00
1	12.92	200.00		812.92
2	10.50	200.00		623.42
3	8.05	200.00		431.47
4	5.57	200.00		237.04
5	3.06	200.00		40.10
6	0.52	40.62		0.00""",
                'exe': 'program.exe',
                'output_file': '_out',
            }),
            Run({
                'input': """3000 150 10""",
                'expected_output': """
...bunch of lines...
20	3.65	150.00		291.83
21	2.43	150.00		144.26
22	1.20	145.46		0.00""",
                'exe': 'program.exe',
                'output_file': '_out',
                'append_output_file': True,
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)