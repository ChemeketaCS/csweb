#!/usr/bin/env python3

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'files',
        'clean_files': True,
        'sort_files': True,
        'copy_files': ['makefile', 'main.cpp', 'doctest.h', 'test.cpp'],
    }),
    Task({
        'name': 'make',
        'makefile': 'makefile',
        'max_time': 10,
        'make_output_file': '__make_out',
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'exe': 'program.exe',
                'max_time': 1,
                'output_file': '__output',
                'append_output_file': False,
                'input': '3',
                'expected_output': '7',
            }),
            Run({
                'exe': 'test.exe',
                'max_time': 1,
                'output_file': '__test',
                'append_output_file': False,
            }),
        ]
    }),
]

pygrader.execute(tasks)
