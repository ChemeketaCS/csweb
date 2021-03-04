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
        'copy_files': ['makefile', 'testPrintCount.cpp', 'testDiagonalPlace.cpp', 'testGapCount.cpp', 'testCheckPlaceHorizontal.cpp']
    }),
    Task({
        'name': 'make', 
        'makefile': 'makefile'
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'name': 'Space count and prints',
                'input': """ """,
                'expected_output': """
--------------------
Spaces: 92
--------------------
H _ _ _ _ _ _ _ _ _ 
E _ _ _ _ _ _ _ _ _ 
A _ _ _ _ _ I N T _ 
P R O G R A M _ _ _ 
_ _ B _ _ _ _ _ _ _ 
_ _ B _ _ _ _ _ _ _ 
_ _ B _ _ _ A _ _ _ 
_ _ E _ V O I D _ _ 
_ _ _ _ _ _ N _ _ _ 
S T A C K _ _ _ _ _ 
_ _ _ _ _ _ _ _ _ _ 
_ _ _ _ _ _ _ _ _ _ 
--------------------
H H D W B A X K V K 
E K R V A W V P M T 
A L V M U G I N T Y 
P R O G R A M E Y T 
P D B G H C O M X R 
A E B E M A W O X J 
E R B X L Z A U K Q 
F Q E Y V O I D X O 
P D W V G Y N B T D 
S T A C K P P Q T T 
P G P M M Y S O L F 
A J D F J Q M R K Q""",
                'exe': 'testA.exe',
                'output_file': '_testPrintsAndSpaceCount',
            }),
            Run({
                'name': 'Horizontal Place and Check',
                'input': """ """,
                'expected_output': """
Place HAT at 0, 0:
H A T _ _ _ _ _ _ _ 
E _ _ _ _ _ _ _ _ _ 
A _ _ _ _ _ I N T _ 
P R O G R A M _ _ _ 
_ _ B _ _ _ _ _ _ _ 
_ _ B _ _ _ _ _ _ _ 
_ _ B _ _ _ A _ _ _ 
_ _ E _ V O I D _ _ 
_ _ _ _ _ _ N _ _ _ 
S T A C K _ _ _ _ _ 
_ _ _ _ _ _ _ _ _ _ 
_ _ _ _ _ _ _ _ _ _ 
""",
                'exe': 'testB.exe',
                'output_file': '_testHorizontalCheckPlace',
            }),
            Run({
                'name': 'Test Gap Count',
                'input': """ """,
                'expected_output': """
_ _ _ _ _ _ A _ _ _ 
_ A _ _ _ _ _ _ _ _ 
_ _ A _ _ _ _ A _ _ 
A _ _ A A _ _ A _ _ 
_ _ _ _ _ _ _ _ _ _ 
_ _ _ _ _ _ _ _ _ _ 
...
--------------------
Row Gap Size    Start Col
0   6           0
1   8           2
2   4           3
3   2           1
4   10          0
5   10          0
...
""",
                'exe': 'testC.exe',
                'output_file': '_testGaps',
            }),
            Run({
                'name': 'Test Diagonal',
                'input': """ """,
                'expected_output': """
_ _ _ _ _ _ _ _ _ _ 
_ A _ _ _ _ _ _ _ _ 
_ _ B _ _ _ _ _ _ _ 
_ _ _ C _ _ _ _ _ _ 
_ _ _ _ D _ _ _ _ _ 
_ _ _ _ _ _ _ _ _ _ 
...
--------------------
Row Gap Size    Start Col
0   6           0
1   8           2
2   4           3
3   2           1
4   10          0
5   10          0
...
""",
                'exe': 'testD.exe',
                'output_file': '_testDiagonal',
            }),
        ]
    }),
]

#starts up the task processor
pygrader.execute(tasks)