#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

#Warning - code assumes projects are named COURSE-TERM-ASSIGNMENTNAME
repo_path = 'cs260-202020-a05'

tasks = [

    #Minimal sample broken into subtasks. Generates separate output files for each run.
    Task({
        'name': 'copy', 'copy_files': ['OfficialMake', 
                                        'GreatExpectations.txt', 
                                        ]
    }),
    Task({
        'name': 'rename', 'rename_folders': True
    }),
    Task({
        'name': 'make', 'makefile': 'MyMake'
    }),
    Task({
        'name': 'makeOfficial', 'makefile': 'OfficialMake'
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'output_file': '_tester_run',
                'exe': 'linux/Assign5Tester.exe',
                'max_time': 30,
                'expected_output': """ 
r1.has (4,8):1
r1.has (6,8):0
----------------Section 2----------------
Word: Banana 1-8
Word: Apple 1-2 2-5
--------------------------------
Word: Banana 1-8 1-10
Word: Grape 1-7
Word: Apple 1-2 2-5
Word: Carrot 2-12
Word: Date 1-6
Word: Fig 2-3
Word: Caramel 3-2
Word: Lemon 2-9
--------------------------------
Banana : 1-8 1-10 
                """,
                'use_drmemory': True,
            }),
            Run({
                'output_file': '_index_run',
                'exe': 'linux/Assign5Index.exe',
                'max_time': 30,
                'use_drmemory': False,
            }),
        ]
    }),
    Task({
        'name': 'list',
        'git_list': repo_path
    }),
    Task({
        'name': 'clone',
        'git_clone': repo_path
    }),
]

#starts up the task processor
pygrader.execute(tasks)