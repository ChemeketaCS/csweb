#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

#Warning - code assumes projects are named COURSE-TERM-ASSIGNMENTNAME
repo_path = 'cs260-202020-a02'

tasks = [
    #Minimal sample broken into subtasks. Generates separate output files for each run.
    Task({
        'name': 'copy', 'copy_files': ['OfficialMake', '25000AddressesA.txt', '25000AddressesB.txt']
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
                'input': """5000""",
                'output_file': '_plain_run',
                'max_time': 30,
                'exe': 'linux/assign2.exe',
            }),
            Run({
                'input': """100""",
                'output_file': '_drmemory_run',
                'max_time': 30,
                'exe': 'linux/assign2.exe',
                'use_drmemory': True,
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