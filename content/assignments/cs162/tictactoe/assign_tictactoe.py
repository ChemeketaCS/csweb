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
        'copy_files': ['makefile', 'tictactest1.cpp', 'tictactest2.cpp', 'tictactest3.cpp']
    }),
    Task({
        'name': 'make', 
        'makefile': 'makefile'
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'input': """ """,
                'expected_output': """ Empty board """,
                'exe': 'test1.exe'
            }),
            Run({
                'input': """ """,
                'expected_output': """ 
X's turn
  1 2 3
1 X - - 
2 - - - 
3 - - - 
Check Taken Square: 0
Check Valid Move: 1
                """,
                'exe': 'test2.exe',
                'append_output_file': True
            }),
            Run({
                'input': """ """,
                'expected_output': """
Winner: -
Done: 0
  1 2 3
1 X X X 
2 O O - 
3 - - - 
Winner: X
Done: 1
---------------
  1 2 3
1 X X O 
2 X O - 
3 O - - 
Winner: O
Done: 1
                """,
                'exe': 'test3.exe',
                'append_output_file': True
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)