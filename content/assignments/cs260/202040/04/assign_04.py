#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

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

    #Sample of listing git repositories
    #config.py must have github options defined for git_list to work
    #git_list can also be run without being explicitly listed as a task using:
    #./assign01.py -t git_list PATTERN
    Task({
        'name': 'list',
        'git_list': 'cs260-202040-a04'           #list all repos matching this pattern. If not supplied, defaults to None and no clone is done
                                                # the search pattern can be overriden with command line args. This call:
                                                #./assign_01.py a5-bob
                                                #would search for repos matching a5-bob, not cs260-201940-a5
    }),

    #Sample of cloning git repositories
    #config.py must have github options defined for git_clone to work
    #git_clone can also be run without being explicitly listed as a task using:
    #./assign01.py -t git_clone PATTERN
    
    #Warning - code assumes projects are named COURSE-TERM-ASSIGNMENT-NAME
    
    Task({
        'name': 'clone',
        'git_clone': 'cs260-202040-a04'          #clone all repos matching this pattern. If not supplied, defaults to None and no clone is done
                                                # the search pattern can be overriden with command line args. This call:
                                                #./assign_01.py a5-bob
                                                #would search for repos matching a5-bob, not cs260-201940-a5
    }),
]

#starts up the task processor
pygrader.execute(tasks)