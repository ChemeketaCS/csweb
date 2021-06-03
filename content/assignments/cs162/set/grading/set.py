#!/usr/bin/env python3
import os
import sys
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '../../pygrader')))

import pygrader.pygrader as pygrader
from pygrader.pygrader import Task, Run

tasks = [
    Task({
        'name': 'files',
        'clean_files': True,
        'sort_files': True,
        'copy_files': ['makefile', 'doctest.h'],
    }),
    Task({
        'name': 'make',
        'makefile': 'makefile',
        'make_max_time': 20,
        'make_output_file': '__make_out',
    }),
    Task({
        'name': 'run',
        'runs': [
            Run({
                'exe': 'program.exe',
                'max_time': 60,
                'output_file': '__output',
                'use_drmemory': True,
                'append_output_file': False,
            }),
        ]
    }),
]

pygrader.execute(tasks)
