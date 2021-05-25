#!/usr/bin/env python3

# Allow relative import of pygrader. Not needed if pygrader package is installed on python search path
import os
import sys
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

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

    #Sample of listing git repositories
    #config.py must have github options defined for git_list to work
    #git_list can also be run without being explicitly listed as a task using:
    #./assign01.py -t git_list PATTERN
    Task({
        'name': 'list',
        'git_list': 'cs260-202020-a05'           #list all repos matching this pattern. If not supplied, defaults to None and no clone is done
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
        'git_clone': 'cs260-202020-a05'          #clone all repos matching this pattern. If not supplied, defaults to None and no clone is done
                                                # the search pattern can be overriden with command line args. This call:
                                                #./assign_01.py a5-bob
                                                #would search for repos matching a5-bob, not cs260-201940-a5
    }),
]

#starts up the task processor
pygrader.execute(tasks)