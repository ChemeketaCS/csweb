#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

#Warning - code assumes projects are named COURSE-TERM-ASSIGNMENTNAME
repo_path = 'cs260-202020-a03'

tasks = [

    #Minimal sample broken into subtasks. Generates separate output files for each run.
    Task({
        'name': 'copy', 'copy_files': ['OfficialMake', 
                                        'stackTester.cpp', 
                                        'pqTester.cpp', 
                                        'Document.html', 
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
                'output_file': '_stack_run',
                'exe': 'linux/stack.exe',
                'max_time': 10,
                'use_drmemory': True,
            }),
            Run({
                'output_file': '_pq_run',
                'exe': 'linux/pq.exe',
                'max_time': 10,
                'use_drmemory': True,
            })
        ]
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'output_file': '_stack_html_run',
                'exe': 'linux/assign3Stack.exe',
                'max_time': 10,
                'use_drmemory': True,
            }),
            Run({
                'input': """g 2000 p r 1000 p g 1000 p q """,
                'output_file': '_pq_packets_run',
                'max_time': 10,
                'exe': 'linux/assign3PriorityQueue.exe',
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