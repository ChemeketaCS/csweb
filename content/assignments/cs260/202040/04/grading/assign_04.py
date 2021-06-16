#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

#Warning - code assumes projects are named COURSE-TERM-ASSIGNMENTNAME
repo_path = 'cs260-202020-a04'

tasks = [

    #Minimal sample broken into subtasks. Generates separate output files for each run.
    Task({
        'name': 'copy', 'copy_files': ['OfficialMake', 
                                        'testerA.cpp', 
                                        'testerB.cpp', 
                                        'testerC.cpp', 
                                        'IPListA.txt', 
                                        'IPListB.txt', 
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
        'name': 'runTests',
        'runs': [
            Run({
                'output_file': '_testerA_run',
                'exe': 'linux/testerA.exe',
                'max_time': 10,
                'expected_output': """ 
Add 7 things, then a duplicate of one of them.
                """,
                'use_drmemory': True,
            }),
            Run({
                'output_file': '_testerB_run',
                'exe': 'linux/testerB.exe',
                'max_time': 10,
                'expected_output': """ 
Start with 7 things. Remove 4. Expect: waste, stem, pact, main
                """,
                'use_drmemory': True,
            }),
            Run({
                'output_file': '_testerC_run',
                'exe': 'linux/testerC.exe',
                'max_time': 10,
                'expected_output': """ 
Test remove on various locations.
                """,
                'use_drmemory': True,
            }),
        ]
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'input': """1000 1000 """,
                'output_file': '_main_run',
                'max_time': 100,
                'exe': 'linux/assign4.exe',
            })
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